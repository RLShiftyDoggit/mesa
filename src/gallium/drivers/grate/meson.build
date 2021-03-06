# Copyright © 2017 Erik Faye-Lund
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.

files_libgrate = files(
  'class_ids.h',
  'host1x01_hardware.h',
  'hw_host1x01_uclass.h',
  'grate_common.h',
  'grate_compiler_fp.c',
  'grate_compiler_vpe.c',
  'grate_compiler.h',
  'grate_context.c',
  'grate_context.h',
  'grate_draw.c',
  'grate_draw.h',
  'grate_fp_ir.c',
  'grate_fp_ir.h',
  'grate_fp_vliw.h',
  'grate_program.c',
  'grate_program.h',
  'grate_resource.c',
  'grate_resource.h',
  'grate_screen.c',
  'grate_screen.h',
  'grate_state.c',
  'grate_state.h',
  'grate_stream.c',
  'grate_stream.h',
  'grate_surface.c',
  'grate_surface.h',
  'grate_vpe_ir.c',
  'grate_vpe_ir.h'
)

libgrate = static_library(
  'grate',
  [files_libgrate],
  include_directories : [
    inc_src, inc_include, inc_gallium, inc_gallium_aux,
    inc_gallium_drivers, inc_drm_uapi,
  ],
  c_args : [c_vis_args],
  cpp_args : [cpp_vis_args],
  dependencies : [dep_libdrm, dep_libdrm_tegra],
  build_by_default : false,
)

driver_grate = declare_dependency(
  compile_args : '-DGALLIUM_GRATE',
  link_with : [libgrate, libtegrawinsys],
)
