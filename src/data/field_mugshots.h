static const u32 sFieldMugshotGfx_TestNormal[] = INCBIN_U32("graphics/field_mugshots/test/normal.4bpp.lz");
static const u32 sFieldMugshotGfx_TestAlt[] = INCBIN_U32("graphics/field_mugshots/test/alt.4bpp.lz");
static const u16 sFieldMugshotPal_TestNormal[] = INCBIN_U16("graphics/field_mugshots/test/normal.gbapal");
static const u16 sFieldMugshotPal_TestAlt[] = INCBIN_U16("graphics/field_mugshots/test/alt.gbapal");

static const u32 sFieldMugshotGfx_HamtaroNormal[] = INCBIN_U32("graphics/field_mugshots/hamtaro/normal.4bpp.lz");
static const u16 sFieldMugshotPal_HamtaroNormal[] = INCBIN_U16("graphics/field_mugshots/hamtaro/normal.gbapal");

static const u32 sFieldMugshotGfx_BijouNormal[] = INCBIN_U32("graphics/field_mugshots/bijou/normal.4bpp.lz");
static const u16 sFieldMugshotPal_BijouNormal[] = INCBIN_U16("graphics/field_mugshots/bijou/normal.gbapal");

static const u32 sFieldMugshotGfx_BossNormal[] = INCBIN_U32("graphics/field_mugshots/boss/normal.4bpp.lz");
static const u16 sFieldMugshotPal_BossNormal[] = INCBIN_U16("graphics/field_mugshots/boss/normal.gbapal");

static const u32 sFieldMugshotGfx_CappyNormal[] = INCBIN_U32("graphics/field_mugshots/cappy/normal.4bpp.lz");
static const u16 sFieldMugshotPal_CappyNormal[] = INCBIN_U16("graphics/field_mugshots/cappy/normal.gbapal");

static const u32 sFieldMugshotGfx_DexterNormal[] = INCBIN_U32("graphics/field_mugshots/dexter/normal.4bpp.lz");
static const u16 sFieldMugshotPal_DexterNormal[] = INCBIN_U16("graphics/field_mugshots/dexter/normal.gbapal");

static const u32 sFieldMugshotGfx_HowdyNormal[] = INCBIN_U32("graphics/field_mugshots/howdy/normal.4bpp.lz");
static const u16 sFieldMugshotPal_HowdyNormal[] = INCBIN_U16("graphics/field_mugshots/howdy/normal.gbapal");

static const u32 sFieldMugshotGfx_JingleNormal[] = INCBIN_U32("graphics/field_mugshots/jingle/normal.4bpp.lz");
static const u16 sFieldMugshotPal_JingleNormal[] = INCBIN_U16("graphics/field_mugshots/jingle/normal.gbapal");

static const u32 sFieldMugshotGfx_MaxwellNormal[] = INCBIN_U32("graphics/field_mugshots/maxwell/normal.4bpp.lz");
static const u16 sFieldMugshotPal_MaxwellNormal[] = INCBIN_U16("graphics/field_mugshots/maxwell/normal.gbapal");

static const u32 sFieldMugshotGfx_OxnardNormal[] = INCBIN_U32("graphics/field_mugshots/oxnard/normal.4bpp.lz");
static const u16 sFieldMugshotPal_OxnardNormal[] = INCBIN_U16("graphics/field_mugshots/oxnard/normal.gbapal");

static const u32 sFieldMugshotGfx_PandaNormal[] = INCBIN_U32("graphics/field_mugshots/panda/normal.4bpp.lz");
static const u16 sFieldMugshotPal_PandaNormal[] = INCBIN_U16("graphics/field_mugshots/panda/normal.gbapal");

static const u32 sFieldMugshotGfx_PashminaNormal[] = INCBIN_U32("graphics/field_mugshots/pashmina/normal.4bpp.lz");
static const u16 sFieldMugshotPal_PashminaNormal[] = INCBIN_U16("graphics/field_mugshots/pashmina/normal.gbapal");

static const u32 sFieldMugshotGfx_PenelopeNormal[] = INCBIN_U32("graphics/field_mugshots/penelope/normal.4bpp.lz");
static const u16 sFieldMugshotPal_PenelopeNormal[] = INCBIN_U16("graphics/field_mugshots/penelope/normal.gbapal");

static const u32 sFieldMugshotGfx_SandyNormal[] = INCBIN_U32("graphics/field_mugshots/sandy/normal.4bpp.lz");
static const u16 sFieldMugshotPal_SandyNormal[] = INCBIN_U16("graphics/field_mugshots/sandy/normal.gbapal");

static const u32 sFieldMugshotGfx_SnoozerNormal[] = INCBIN_U32("graphics/field_mugshots/snoozer/normal.4bpp.lz");
static const u16 sFieldMugshotPal_SnoozerNormal[] = INCBIN_U16("graphics/field_mugshots/snoozer/normal.gbapal");

static const u32 sFieldMugshotGfx_StanNormal[] = INCBIN_U32("graphics/field_mugshots/stan/normal.4bpp.lz");
static const u16 sFieldMugshotPal_StanNormal[] = INCBIN_U16("graphics/field_mugshots/stan/normal.gbapal");

struct MugshotGfx
{
    const u32 *gfx;
    const u16 *pal;
};

static const struct MugshotGfx sFieldMugshots[MUGSHOT_COUNT][EMOTE_COUNT] =
{
    [MUGSHOT_TEST] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_TestNormal,
            .pal = sFieldMugshotPal_TestNormal,
        },

        [EMOTE_ALT] =
        {
            .gfx = sFieldMugshotGfx_TestAlt,
            .pal = sFieldMugshotPal_TestAlt,
        },
    },
    [MUGSHOT_HAMTARO] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_HamtaroNormal,
            .pal = sFieldMugshotPal_HamtaroNormal,
        },
    },
    [MUGSHOT_BIJOU] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_BijouNormal,
            .pal = sFieldMugshotPal_BijouNormal,
        },
    },
    [MUGSHOT_BOSS] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_BossNormal,
            .pal = sFieldMugshotPal_BossNormal,
        },
    },
    [MUGSHOT_CAPPY] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_CappyNormal,
            .pal = sFieldMugshotPal_CappyNormal,
        },
    },
    [MUGSHOT_DEXTER] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_DexterNormal,
            .pal = sFieldMugshotPal_DexterNormal,
        },
    },
    [MUGSHOT_HOWDY] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_HowdyNormal,
            .pal = sFieldMugshotPal_HowdyNormal,
        },
    },
    [MUGSHOT_JINGLE] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_JingleNormal,
            .pal = sFieldMugshotPal_JingleNormal,
        },
    },
    [MUGSHOT_MAXWELL] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_MaxwellNormal,
            .pal = sFieldMugshotPal_MaxwellNormal,
        },
    },
    [MUGSHOT_OXNARD] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_OxnardNormal,
            .pal = sFieldMugshotPal_OxnardNormal,
        },
    },
    [MUGSHOT_PANDA] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_PandaNormal,
            .pal = sFieldMugshotPal_PandaNormal,
        },
    },
    [MUGSHOT_PASHMINA] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_PashminaNormal,
            .pal = sFieldMugshotPal_PashminaNormal,
        },
    },
    [MUGSHOT_PENELOPE] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_PenelopeNormal,
            .pal = sFieldMugshotPal_PenelopeNormal,
        },
    },
    [MUGSHOT_SANDY] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_SandyNormal,
            .pal = sFieldMugshotPal_SandyNormal,
        },
    },
    [MUGSHOT_SNOOZER] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_SnoozerNormal,
            .pal = sFieldMugshotPal_SnoozerNormal,
        },
    },
    [MUGSHOT_STAN] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_StanNormal,
            .pal = sFieldMugshotPal_StanNormal,
        },
    },
};
