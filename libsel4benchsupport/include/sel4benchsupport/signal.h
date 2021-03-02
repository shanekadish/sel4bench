/*
 * Copyright 2017, Data61, CSIRO (ABN 41 687 119 230)
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */
#pragma once

#include <sel4bench/sel4bench.h>
#include <benchmark.h>

#define N_IGNORED 10
#define N_RUNS (100 + N_IGNORED)

typedef struct signal_results {
    ccnt_t lo_prio_results[N_RUNS];
    ccnt_t hi_prio_results[N_RUNS];
    ccnt_t hi_prio_double_results[N_RUNS];
    ccnt_t overhead[N_RUNS];
    ccnt_t hi_prio_average[N_RUNS][NUM_AVERAGE_EVENTS];
    ccnt_t hi_prio_double_average[N_RUNS][NUM_AVERAGE_EVENTS];
} signal_results_t;
