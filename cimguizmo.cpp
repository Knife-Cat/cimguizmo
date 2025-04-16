//This file is automatically generated by generator.lua from https://github.com/cimgui/cimguizmo
//based on ImGuizmo.h file version 1.91.3 WIP from https://github.com/CedricGuillemet/ImGuizmo
#include "imgui.h"
#include "imgui_internal.h"
#include "./ImGuizmo/ImGuizmo.h"
#include "cimguizmo.h"



CIMGUI_API void ImGuizmo_SetDrawlist(ImDrawList* drawlist)
{
    return ImGuizmo::SetDrawlist(drawlist);
}
CIMGUI_API void ImGuizmo_BeginFrame()
{
    return ImGuizmo::BeginFrame();
}
CIMGUI_API void ImGuizmo_SetImGuiContext(ImGuiContext* ctx)
{
    return ImGuizmo::SetImGuiContext(ctx);
}
CIMGUI_API void ImGuizmo_SetImGuiAssert(ImAssertFunc ctx)
{
    return ImGuizmo::SetImGuiAssert(ctx);
}
CIMGUI_API bool ImGuizmo_IsOver_Nil()
{
    return ImGuizmo::IsOver();
}
CIMGUI_API bool ImGuizmo_IsUsing()
{
    return ImGuizmo::IsUsing();
}
CIMGUI_API bool ImGuizmo_IsUsingViewManipulate()
{
    return ImGuizmo::IsUsingViewManipulate();
}
CIMGUI_API bool ImGuizmo_IsViewManipulateHovered()
{
    return ImGuizmo::IsViewManipulateHovered();
}
CIMGUI_API bool ImGuizmo_IsUsingAny()
{
    return ImGuizmo::IsUsingAny();
}
CIMGUI_API void ImGuizmo_Enable(bool enable)
{
    return ImGuizmo::Enable(enable);
}
CIMGUI_API void ImGuizmo_DecomposeMatrixToComponents(const float* matrix,float* translation,float* rotation,float* scale)
{
    return ImGuizmo::DecomposeMatrixToComponents(matrix,translation,rotation,scale);
}
CIMGUI_API void ImGuizmo_RecomposeMatrixFromComponents(const float* translation,const float* rotation,const float* scale,float* matrix)
{
    return ImGuizmo::RecomposeMatrixFromComponents(translation,rotation,scale,matrix);
}
CIMGUI_API void ImGuizmo_SetRect(float x,float y,float width,float height)
{
    return ImGuizmo::SetRect(x,y,width,height);
}
CIMGUI_API void ImGuizmo_SetOrthographic(bool isOrthographic)
{
    return ImGuizmo::SetOrthographic(isOrthographic);
}
CIMGUI_API void ImGuizmo_DrawCubes(const float* view,const float* projection,const float* matrices,int matrixCount)
{
    return ImGuizmo::DrawCubes(view,projection,matrices,matrixCount);
}
CIMGUI_API void ImGuizmo_DrawGrid(const float* view,const float* projection,const float* matrix,const float gridSize)
{
    return ImGuizmo::DrawGrid(view,projection,matrix,gridSize);
}
CIMGUI_API bool ImGuizmo_Manipulate(const float* view,const float* projection,OPERATION operation,MODE mode,float* matrix,float* deltaMatrix,const float* snap,const float* localBounds,const float* boundsSnap)
{
    return ImGuizmo::Manipulate(view,projection,operation,mode,matrix,deltaMatrix,snap,localBounds,boundsSnap);
}
CIMGUI_API void ImGuizmo_ViewManipulate_Float(float* view,float length,ImVec2 position,ImVec2 size,ImU32 backgroundColor)
{
    return ImGuizmo::ViewManipulate(view,length,position,size,backgroundColor);
}
CIMGUI_API void ImGuizmo_ViewManipulate_FloatPtr(float* view,const float* projection,OPERATION operation,MODE mode,float* matrix,float length,ImVec2 position,ImVec2 size,ImU32 backgroundColor)
{
    return ImGuizmo::ViewManipulate(view,projection,operation,mode,matrix,length,position,size,backgroundColor);
}
CIMGUI_API void ImGuizmo_SetAlternativeWindow(ImGuiWindow* window)
{
    return ImGuizmo::SetAlternativeWindow(window);
}
CIMGUI_API void ImGuizmo_SetID(int id)
{
    return ImGuizmo::SetID(id);
}
CIMGUI_API void ImGuizmo_PushID_Str(const char* str_id)
{
    return ImGuizmo::PushID(str_id);
}
CIMGUI_API void ImGuizmo_PushID_StrStr(const char* str_id_begin,const char* str_id_end)
{
    return ImGuizmo::PushID(str_id_begin,str_id_end);
}
CIMGUI_API void ImGuizmo_PushID_Ptr(const void* ptr_id)
{
    return ImGuizmo::PushID(ptr_id);
}
CIMGUI_API void ImGuizmo_PushID_Int(int int_id)
{
    return ImGuizmo::PushID(int_id);
}
CIMGUI_API void ImGuizmo_PopID()
{
    return ImGuizmo::PopID();
}
CIMGUI_API ImGuiID ImGuizmo_GetID_Str(const char* str_id)
{
    return ImGuizmo::GetID(str_id);
}
CIMGUI_API ImGuiID ImGuizmo_GetID_StrStr(const char* str_id_begin,const char* str_id_end)
{
    return ImGuizmo::GetID(str_id_begin,str_id_end);
}
CIMGUI_API ImGuiID ImGuizmo_GetID_Ptr(const void* ptr_id)
{
    return ImGuizmo::GetID(ptr_id);
}
CIMGUI_API bool ImGuizmo_IsOver_OPERATION(OPERATION op)
{
    return ImGuizmo::IsOver(op);
}
CIMGUI_API void ImGuizmo_SetGizmoSizeClipSpace(float value)
{
    return ImGuizmo::SetGizmoSizeClipSpace(value);
}
CIMGUI_API void ImGuizmo_AllowAxisFlip(bool value)
{
    return ImGuizmo::AllowAxisFlip(value);
}
CIMGUI_API void ImGuizmo_SetAxisLimit(float value)
{
    return ImGuizmo::SetAxisLimit(value);
}
CIMGUI_API void ImGuizmo_SetAxisMask(bool x,bool y,bool z)
{
    return ImGuizmo::SetAxisMask(x,y,z);
}
CIMGUI_API void ImGuizmo_SetPlaneLimit(float value)
{
    return ImGuizmo::SetPlaneLimit(value);
}
CIMGUI_API bool ImGuizmo_IsOver_FloatPtr(float* position,float pixelRadius)
{
    return ImGuizmo::IsOver(position,pixelRadius);
}
CIMGUI_API Style* Style_Style(void)
{
    return IM_NEW(Style)();
}
CIMGUI_API void Style_destroy(Style* self)
{
    IM_DELETE(self);
}
CIMGUI_API Style* ImGuizmo_GetStyle()
{
    return &ImGuizmo::GetStyle();
}



