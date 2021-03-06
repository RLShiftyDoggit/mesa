#ifndef GRATE_PROGRAM_H
#define GRATE_PROGRAM_H

#include "pipe/p_context.h"
#include "pipe/p_state.h"

#include "grate_compiler.h"

struct grate_shader_blob {
   uint32_t *commands;
   int num_commands;
};

struct grate_vertex_shader_state {
   struct pipe_shader_state base;
   struct grate_shader_blob blob;
   uint16_t output_mask;
};

struct grate_fragment_shader_state {
   struct pipe_shader_state base;
   struct grate_shader_blob blob;
   struct grate_fp_info info;
};

void
grate_context_program_init(struct pipe_context *pcontext);

#endif
