#ifndef GRATE_SCREEN_H
#define GRATE_SCREEN_H

#include "pipe/p_screen.h"
#include "util/slab.h"

#include <libdrm/tegra.h>

extern uint32_t grate_debug;

#define GRATE_DEBUG_UNIMPLEMENTED 0x1
#define GRATE_DEBUG_TGSI 0x2

struct grate_screen {
   struct pipe_screen base;

   struct slab_parent_pool transfer_pool;

   struct drm_tegra *drm;
};

static inline struct grate_screen *
grate_screen(struct pipe_screen *screen)
{
   return (struct grate_screen *)screen;
}

struct pipe_screen *
grate_screen_create(struct drm_tegra *drm);

#endif
