#pragma once
#include "core.h"

VL_SymMap* init_ptable();
VL_Expr* VL_Core_apply_infix(VL_Core* self, const VL_Expr* expr);