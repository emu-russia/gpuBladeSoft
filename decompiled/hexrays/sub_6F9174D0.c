bool __fastcall sub_6F9174D0(int a1, int a2, int a3, int a4)
{
  int v4; // ebx@1
  int v5; // ecx@1
  int v6; // esi@1
  int v7; // eax@3
  int v8; // edx@3
  unsigned int v9; // eax@3
  void *v10; // esp@3
  unsigned int v11; // edi@3
  unsigned int v12; // eax@3
  int v13; // eax@5
  int v15; // esi@10
  int v16; // [sp+38h] [bp-58h]@0
  int v17; // [sp+3Ch] [bp-54h]@0
  int v18; // [sp+40h] [bp-50h]@0
  int v19; // [sp+44h] [bp-4Ch]@0
  int v20; // [sp+48h] [bp-48h]@0
  int v21; // [sp+4Ch] [bp-44h]@0
  int v22; // [sp+50h] [bp-40h]@0
  char v23; // [sp+54h] [bp-3Ch]@0
  char v24; // [sp+58h] [bp-38h]@7
  int v25; // [sp+60h] [bp-30h]@3
  int v26; // [sp+64h] [bp-2Ch]@7
  int v27; // [sp+70h] [bp-20h]@3
  int v28; // [sp+74h] [bp-1Ch]@3
  char v29; // [sp+7Fh] [bp-11h]@3

  v4 = a1;
  v5 = *(_DWORD *)(a1 + 88);
  v6 = a4;
  if ( !v5 )
    sub_6F95AA30();
  if ( (unsigned __int8)(*(int (__fastcall **)(int, int))(*(_DWORD *)v5 + 24))(v5, a2) )
    goto LABEL_5;
  v7 = a4
     * (*(int (__stdcall **)(int, int, int, int, int, int, int))(**(_DWORD **)(v4 + 88) + 32))(
         v16,
         v17,
         v18,
         v19,
         v20,
         v21,
         v22);
  v8 = v7;
  v9 = 16 * ((unsigned int)(v7 + 27) >> 4);
  sub_6F8A13B0(v9, v23);
  v10 = alloca(v9);
  v11 = (unsigned int)&v29 & 0xFFFFFFF0;
  v12 = (*(int (__cdecl **)(int, int, int, int *, unsigned int, unsigned int, int *))(**(_DWORD **)(v4 + 88) + 8))(
          v4 + 52,
          a3,
          a3 + 2 * a4,
          &v28,
          (unsigned int)&v29 & 0xFFFFFFF0,
          ((unsigned int)&v29 & 0xFFFFFFF0) + v8,
          &v27);
  if ( v12 > 1 )
  {
    if ( v12 == 3 )
    {
LABEL_5:
      v13 = sub_6F90E570((FILE **)(v4 + 36), a3, a4);
      return v13 == v6;
    }
LABEL_11:
    sub_6F95ACA0("basic_filebuf::_M_convert_to_external conversion error");
  }
  v24 = v12;
  v26 = v27;
  v6 = v27 - v11;
  v13 = sub_6F90E570((FILE **)(v4 + 36), (unsigned int)&v29 & 0xFFFFFFF0, v27 - v11);
  if ( v6 != v13 || !(v24 & 1) )
    return v13 == v6;
  if ( (*(int (__stdcall **)(int, int, _DWORD, int *, unsigned int, int, int *))(**(_DWORD **)(v4 + 88) + 8))(
         v25,
         v28,
         *(_DWORD *)(v4 + 20),
         &v28,
         (unsigned int)&v29 & 0xFFFFFFF0,
         v26,
         &v27) == 2 )
    goto LABEL_11;
  v15 = v27 - v11;
  return sub_6F90E570((FILE **)(v4 + 36), (unsigned int)&v29 & 0xFFFFFFF0, v27 - v11) == v15;
}
