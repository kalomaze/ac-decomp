#include "ef_effect_control.h"

static void eHanabiHoshi_init(xyz_t pos, int prio, s16 angle, GAME* game, u16 item_name, s16 arg0, s16 arg1) {
    // TODO
}

static void eHanabiHoshi_ct(eEC_Effect_c* effect, GAME* game, void* ct_arg) {
    // TODO
}

static void eHanabiHoshi_mv(eEC_Effect_c* effect, GAME* game) {
    // TODO
}

static void eHanabiHoshi_dw(eEC_Effect_c* effect, GAME* game) {
    // TODO
}

eEC_PROFILE_c iam_ef_hanabi_hoshi = {
    // clang-format off
    &eHanabiHoshi_init,
    &eHanabiHoshi_ct,
    &eHanabiHoshi_mv,
    &eHanabiHoshi_dw,
    eEC_IGNORE_DEATH,
    eEC_NO_CHILD_ID,
    eEC_IGNORE_DEATH_DIST,
    // clang-format on
};
