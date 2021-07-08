//This file is automatically generated by generator.lua from https://github.com/cimgui/cimguizmo
//based on ImGuizmo.h file version 1.91.3 WIP from https://github.com/CedricGuillemet/ImGuizmo
#ifndef CIMGUIZMO_INCLUDED
#define CIMGUIZMO_INCLUDED

#include "../cimgui/cimgui.h"

#ifdef CIMGUI_DEFINE_ENUMS_AND_STRUCTS

typedef struct ImGuiWindow ImGuiWindow;
struct ImGuiWindow;
typedef enum {
      TRANSLATE_X = (1u << 0),
      TRANSLATE_Y = (1u << 1),
      TRANSLATE_Z = (1u << 2),
      ROTATE_X = (1u << 3),
      ROTATE_Y = (1u << 4),
      ROTATE_Z = (1u << 5),
      ROTATE_SCREEN = (1u << 6),
      SCALE_X = (1u << 7),
      SCALE_Y = (1u << 8),
      SCALE_Z = (1u << 9),
      BOUNDS = (1u << 10),
      SCALE_XU = (1u << 11),
      SCALE_YU = (1u << 12),
      SCALE_ZU = (1u << 13),
      TRANSLATE = TRANSLATE_X | TRANSLATE_Y | TRANSLATE_Z,
      ROTATE = ROTATE_X | ROTATE_Y | ROTATE_Z | ROTATE_SCREEN,
      SCALE = SCALE_X | SCALE_Y | SCALE_Z,
      SCALEU = SCALE_XU | SCALE_YU | SCALE_ZU,
      UNIVERSAL = TRANSLATE | ROTATE | SCALEU
   }OPERATION;
typedef enum {
      LOCAL,
      WORLD
   }MODE;
typedef enum {
      DIRECTION_X,
      DIRECTION_Y,
      DIRECTION_Z,
      PLANE_X,
      PLANE_Y,
      PLANE_Z,
      SELECTION,
      INACTIVE,
      TRANSLATION_LINE,
      SCALE_LINE,
      ROTATION_USING_BORDER,
      ROTATION_USING_FILL,
      HATCHED_AXIS_LINES,
      TEXT,
      TEXT_SHADOW,
      COUNT
   }COLOR;
typedef struct Style Style;
struct Style
{
      float TranslationLineThickness;
      float TranslationLineArrowSize;
      float RotationLineThickness;
      float RotationOuterLineThickness;
      float ScaleLineThickness;
      float ScaleLineCircleSize;
      float HatchedAxisLineThickness;
      float CenterCircleSize;
      ImVec4 Colors[COUNT];
};
#else
#endif // CIMGUI_DEFINE_ENUMS_AND_STRUCTS

#ifndef CIMGUI_DEFINE_ENUMS_AND_STRUCTS
typedef ImGuizmo::Style Style;
typedef ImGuizmo::COLOR COLOR;
typedef ImGuizmo::MODE MODE;
typedef ImGuizmo::OPERATION OPERATION;
#endif //CIMGUI_DEFINE_ENUMS_AND_STRUCTS
CIMGUI_API void ImGuizmo_SetDrawlist(ImDrawList* drawlist);
CIMGUI_API void ImGuizmo_BeginFrame(void);
CIMGUI_API void ImGuizmo_SetImGuiContext(ImGuiContext* ctx);
CIMGUI_API bool ImGuizmo_IsOver_Nil(void);
CIMGUI_API bool ImGuizmo_IsUsing(void);
CIMGUI_API bool ImGuizmo_IsUsingViewManipulate(void);
CIMGUI_API bool ImGuizmo_IsViewManipulateHovered(void);
CIMGUI_API bool ImGuizmo_IsUsingAny(void);
CIMGUI_API void ImGuizmo_Enable(bool enable);
CIMGUI_API void ImGuizmo_DecomposeMatrixToComponents(const float* matrix,float* translation,float* rotation,float* scale);
CIMGUI_API void ImGuizmo_RecomposeMatrixFromComponents(const float* translation,const float* rotation,const float* scale,float* matrix);
CIMGUI_API void ImGuizmo_SetRect(float x,float y,float width,float height);
CIMGUI_API void ImGuizmo_SetOrthographic(bool isOrthographic);
CIMGUI_API void ImGuizmo_DrawCubes(const float* view,const float* projection,const float* matrices,int matrixCount);
CIMGUI_API void ImGuizmo_DrawGrid(const float* view,const float* projection,const float* matrix,const float gridSize);
CIMGUI_API bool ImGuizmo_Manipulate(const float* view,const float* projection,OPERATION operation,MODE mode,float* matrix,float* deltaMatrix,const float* snap,const float* localBounds,const float* boundsSnap);
CIMGUI_API void ImGuizmo_ViewManipulate_Float(float* view,float length,ImVec2 position,ImVec2 size,ImU32 backgroundColor);
CIMGUI_API void ImGuizmo_ViewManipulate_FloatPtr(float* view,const float* projection,OPERATION operation,MODE mode,float* matrix,float length,ImVec2 position,ImVec2 size,ImU32 backgroundColor);
CIMGUI_API void ImGuizmo_SetAlternativeWindow(ImGuiWindow* window);
CIMGUI_API void ImGuizmo_SetID(int id);
CIMGUI_API void ImGuizmo_PushID_Str(const char* str_id);
CIMGUI_API void ImGuizmo_PushID_StrStr(const char* str_id_begin,const char* str_id_end);
CIMGUI_API void ImGuizmo_PushID_Ptr(const void* ptr_id);
CIMGUI_API void ImGuizmo_PushID_Int(int int_id);
CIMGUI_API void ImGuizmo_PopID(void);
CIMGUI_API ImGuiID ImGuizmo_GetID_Str(const char* str_id);
CIMGUI_API ImGuiID ImGuizmo_GetID_StrStr(const char* str_id_begin,const char* str_id_end);
CIMGUI_API ImGuiID ImGuizmo_GetID_Ptr(const void* ptr_id);
CIMGUI_API bool ImGuizmo_IsOver_OPERATION(OPERATION op);
CIMGUI_API void ImGuizmo_SetGizmoSizeClipSpace(float value);
CIMGUI_API void ImGuizmo_AllowAxisFlip(bool value);
CIMGUI_API void ImGuizmo_SetAxisLimit(float value);
CIMGUI_API void ImGuizmo_SetAxisMask(bool x,bool y,bool z);
CIMGUI_API void ImGuizmo_SetPlaneLimit(float value);
CIMGUI_API bool ImGuizmo_IsOver_FloatPtr(float* position,float pixelRadius);
CIMGUI_API Style* Style_Style(void);
CIMGUI_API void Style_destroy(Style* self);
CIMGUI_API Style* ImGuizmo_GetStyle(void);



#endif //CIMGUIZMO_INCLUDED




