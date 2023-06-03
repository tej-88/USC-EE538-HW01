load("@rules_cc//cc:defs.bzl", "cc_test")

cc_test(
    name = "tests",
    srcs = glob(["**/*.cc"]),
    deps = [
        "//src/lib:CPPLib",
        "@com_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "grader_tests",
    srcs = glob(["**/*grader_test.cc"]),
    deps = [
        "//src/lib:CPPLib",
        "@com_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "q2_student_test",
    srcs = ["q2_student_test.cc"],
    deps = [
        "//src/lib:CPPLib",
        "@com_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "q5_student_test",
    srcs = ["q5_student_test.cc"],
    deps = [
        "//src/lib:CPPLib",
        "@com_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "q6_student_test",
    srcs = ["q6_student_test.cc"],
    deps = [
        "//src/lib:CPPLib",
        "@com_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "q7_student_test",
    srcs = ["q7_student_test.cc"],
    deps = [
        "//src/lib:CPPLib",
        "@com_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "q5_grader_test",
    srcs = ["q5_grader_test.cc"],
    deps = [
        "//src/lib:CPPLib",
        "@com_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "q6_grader_test",
    srcs = ["q6_grader_test.cc"],
    deps = [
        "//src/lib:CPPLib",
        "@com_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "q7_grader_test",
    srcs = ["q7_grader_test.cc"],
    deps = [
        "//src/lib:CPPLib",
        "@com_google_googletest//:gtest_main",
    ],
)
