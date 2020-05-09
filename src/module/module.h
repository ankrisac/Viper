#pragma once
#include "core.h"

bool VL_Module_parse(VL_Module* self, const VL_Str* file_path);

VL_ModuleList* VL_ModuleList_new(size_t len);
void VL_ModuleList_delete(VL_ModuleList* self);

VL_Module* VL_ModuleList_add_module(VL_ModuleList* self, const VL_Str* file_path);
VL_Module* VL_ModuleList_get_module(VL_ModuleList* self, size_t id);