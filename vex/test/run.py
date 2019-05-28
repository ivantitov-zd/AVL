from __future__ import print_function

import os
import sys
from subprocess import check_output

def root():
    return os.path.dirname(__file__).replace('\\', '/')

def run_test(bin_folder, test_file=None):
    avl_test_file = test_file or os.path.join(root(), 'avl_test.vfl').replace('\\', '/')
    avl_vex_test_file = avl_test_file[:-3] + 'vex'
    print(avl_test_file)
    if not os.path.exists(avl_test_file): return
    os.environ['HOUDINI_VEX_ASSERT'] = '1'
    print(check_output(bin_folder + '/vcc.exe {0} -o {1} -V -I {2}'.format(avl_test_file,
                                                             avl_vex_test_file,
                                                             os.path.dirname(avl_test_file).replace('\\', '/') + '/../include/'),
                        shell=False).decode('utf-8'))
    print(check_output(bin_folder + '/vexexec.exe ' + avl_vex_test_file, shell=False).decode('utf-8'))

if __name__ == '__main__':
    if len(sys.argv) > 1:
        run_test(sys.argv[1])
    else:
        print('Path to Houdini bin folder not found.')
    input('Press enter to exit...')
    exit()
