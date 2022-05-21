cmake_minimum_required(VERSION 3.22)
project(CPL_Labs C)

set(CMAKE_C_STANDARD 11)

add_executable(CPL_Labs
        Chapter1/Section-1.1/Exercise-1.1/wrongHello.c
        Chapter1/Section-1.1/Exercise-1.2/wrongHello.c
        Chapter1/Section-1.1/hello-world/hello.c
        Chapter1/Section-1.10/Exercise-1.20/detab.c
        Chapter1/Section-1.10/Exercise-1.21/entab.c
        Chapter1/Section-1.10/Exercise-1.22/fold.c
        Chapter1/Section-1.10/Exercise-1.23/nocomment.c
        Chapter1/Section-1.10/Exercise-1.23/sample.c
        Chapter1/Section-1.10/Exercise-1.23/sample_fix.c
        Chapter1/Section-1.10/Exercise-1.24/checksyntax.c
        Chapter1/Section-1.10/Exercise-1.24/sample.c
        Chapter1/Section-1.10/longest_char/longest_char.c
        Chapter1/Section-1.2/Exercise-1.3/fc-convertor.c
        Chapter1/Section-1.2/Exercise-1.4/cf-convertor.c
        Chapter1/Section-1.2/fc-convertor/fc-convertor-float.c
        Chapter1/Section-1.2/fc-convertor/fc-convertor-rj.c
        Chapter1/Section-1.2/fc-convertor/fc-convertor.c
        Chapter1/Section-1.3/Exercise-1.5/fc-convertor-rv.c
        Chapter1/Section-1.3/forloop/fc-convertor-for.c
        Chapter1/Section-1.4/symbolic/fc-convertor-for.c
        Chapter1/Section-1.5/char_count/char_count_for.c
        Chapter1/Section-1.5/char_count/char_count_while.c
        Chapter1/Section-1.5/Exercise-1.10/visible_char.c
        Chapter1/Section-1.5/Exercise-1.11/word_counting.c
        Chapter1/Section-1.5/Exercise-1.12/word_counting.c
        Chapter1/Section-1.5/Exercise-1.6/verify.c
        Chapter1/Section-1.5/Exercise-1.7/eof.c
        Chapter1/Section-1.5/Exercise-1.8/multi_count.c
        Chapter1/Section-1.5/Exercise-1.9/replace_multi_blank.c
        Chapter1/Section-1.5/Input_and_output/input.c
        Chapter1/Section-1.5/line_count/line_count_for.c
        Chapter1/Section-1.5/line_count/line_count_while.c
        Chapter1/Section-1.5/word_counting/word_counting.c
        Chapter1/Section-1.6/Exercise-1.13/word_length_histogram_horizontal.c
        Chapter1/Section-1.6/Exercise-1.13/word_length_histogram_vertical.c
        Chapter1/Section-1.6/Exercise-1.14/char_frequency.c
        Chapter1/Section-1.7/Exercise-1.15/cf-convertor-function.c
        Chapter1/Section-1.9/char_arrays/char_arrays.c
        Chapter1/Section-1.9/Exercise-1.16/ex.c
        Chapter1/Section-1.9/Exercise-1.17/ex.c
        Chapter1/Section-1.9/Exercise-1.18/ex.c
        Chapter1/Section-1.9/Exercise-1.19/ex.c)
