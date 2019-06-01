#ifndef _AVL_ASSERT_H_
#define _AVL_ASSERT_H_

#define assert(EXPR) \
    if (assert_enabled()) \
    { \
    if (!(EXPR)) print_once(sprintf('Test Failed %s:%d - (%s)\n', __FILE__, __LINE__, #EXPR)); \
    }

#define assertAlmostEqual(EXPR, VALUE, TOLERANCE) \
    if (assert_enabled()) \
    { \
    if (abs(EXPR-VALUE) > TOLERANCE) print_once(sprintf('Test Failed %s:%d - (%s not almost equal %s)\n', __FILE__, __LINE__, #EXPR, #VALUE)); \
    }

#define assertNotAlmostEqual(EXPR, VALUE, TOLERANCE) \
    if (assert_enabled()) \
    { \
    if (abs(EXPR-VALUE) <= TOLERANCE) print_once(sprintf('Test Failed %s:%d - (%s almost equal %s)\n', __FILE__, __LINE__, #EXPR, #VALUE)); \
    }

#define assertRegex(EXPR, REGEX) \
    if (assert_enabled()) \
    { \
    if (!re_match(REGEX, EXPR)) print_once(sprintf('Test Failed %s:%d - (%s not matches %s)\n', __FILE__, __LINE__, #EXPR, #REGEX)); \
    }

#define assertNotRegex(EXPR, REGEX) \
    if (assert_enabled()) \
    { \
    if (re_match(REGEX, EXPR)) print_once(sprintf('Test Failed %s:%d - (%s matches %s)\n', __FILE__, __LINE__, #EXPR, #REGEX)); \
    }

#endif  // _AVL_ASSERT_H_
