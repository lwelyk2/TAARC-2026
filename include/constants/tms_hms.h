#ifndef GUARD_CONSTANTS_TMS_HMS_H
#define GUARD_CONSTANTS_TMS_HMS_H

#define FOREACH_TM(F) \
    F(TACKLE) \
    F(SCRATCH) \
    F(BODY_SLAM) \
    F(BITE) \
    F(SING) \
    F(DISABLE) \
    F(WATER_GUN) \
    F(BULK_UP) \
    F(DIG) \
    F(RAGE) \
    F(DOUBLE_TEAM) \
    F(MINIMIZE) \
    F(CONFUSE_RAY) \
    F(LOVELY_KISS) \
    F(REST) \
    F(SUBSTITUTE) \
    F(THIEF) \
    F(SCARY_FACE) \
    F(LOCK_ON) \
    F(MILK_DRINK) \
    F(ATTRACT) \
    F(ENCORE) \
    F(UPROAR) \
    F(ASTONISH) \
    F(ROCK_POLISH) \
    F(SWITCHEROO) \
    F(ACID_SPRAY) \
    F(EMBER) \
    F(PSYCHIC) \
    F(SHADOW_BALL) \
    F(BRICK_BREAK) \
    F(GROWL) \
    F(REFLECT) \
    F(SHOCK_WAVE) \
    F(FLAMETHROWER) \
    F(SLUDGE_BOMB) \
    F(SANDSTORM) \
    F(FIRE_BLAST) \
    F(ROCK_TOMB) \
    F(AERIAL_ACE) \
    F(TORMENT) \
    F(FACADE) \
    F(SECRET_POWER) \
    F(BUBBLE) \
    F(POUND) \
    F(LEER) \
    F(STEEL_WING) \
    F(SKILL_SWAP) \
    F(SNATCH) \
    F(OVERHEAT)

#define FOREACH_HM(F) \
    F(CUT) \
    F(FLY) \
    F(SURF) \
    F(STRENGTH) \
    F(FLASH) \
    F(ROCK_SMASH) \
    F(WATERFALL) \
    F(DIVE)

#define FOREACH_TMHM(F) \
    FOREACH_TM(F) \
    FOREACH_HM(F)

#endif
