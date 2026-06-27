bool __thiscall sub_6F915290(int this, int a2, int a3)
{
  int v3; // ebx@1
  int v4; // ecx@1
  int v5; // esi@1
  int v6; // eax@3
  int v7; // edx@3
  unsigned int v8; // eax@3
  void *v9; // esp@3
  unsigned int v10; // edi@3
  unsigned int v11; // eax@3
  int v12; // eax@5
  int v14; // esi@10
  int v15; // [sp+38h] [bp-58h]@0
  int v16; // [sp+3Ch] [bp-54h]@0
  int v17; // [sp+40h] [bp-50h]@0
  int v18; // [sp+44h] [bp-4Ch]@0
  int v19; // [sp+48h] [bp-48h]@0
  int v20; // [sp+4Ch] [bp-44h]@0
  int v21; // [sp+50h] [bp-40h]@0
  char v22; // [sp+54h] [bp-3Ch]@0
  char v23; // [sp+58h] [bp-38h]@7
  int v24; // [sp+60h] [bp-30h]@3
  int v25; // [sp+64h] [bp-2Ch]@7
  int v26; // [sp+70h] [bp-20h]@3
  int v27; // [sp+74h] [bp-1Ch]@3
  char v28; // [sp+7Fh] [bp-11h]@3

  v3 = this;
  v4 = *(_DWORD *)(this + 84);
  v5 = a3;
  if ( !v4 )
    sub_6F95AA30();
  if ( (unsigned __int8)(*(int (**)(void))(*(_DWORD *)v4 + 24))() )
    goto LABEL_5;
  v6 = a3
     * (*(int (__stdcall **)(int, int, int, int, int, int, int))(**(_DWORD **)(v3 + 84) + 32))(
         v15,
         v16,
         v17,
         v18,
         v19,
         v20,
         v21);
  v7 = v6;
  v8 = 16 * ((unsigned int)(v6 + 27) >> 4);
  sub_6F8A13B0(v8, v22);
  v9 = alloca(v8);
  v10 = (unsigned int)&v28 & 0xFFFFFFF0;
  v11 = (*(int (__cdecl **)(int, int, int, int *, unsigned int, unsigned int, int *))(**(_DWORD **)(v3 + 84) + 8))(
          v3 + 52,
          a2,
          a3 + a2,
          &v27,
          (unsigned int)&v28 & 0xFFFFFFF0,
          ((unsigned int)&v28 & 0xFFFFFFF0) + v7,
          &v26);
  if ( v11 > 1 )
  {
    if ( v11 == 3 )
    {
LABEL_5:
      v12 = sub_6F90E570((FILE **)(v3 + 36), a2, a3);
      return v12 == v5;
    }
LABEL_11:
    sub_6F95ACA0("basic_filebuf::_M_convert_to_external conversion error");
  }
  v23 = v11;
  v25 = v26;
  v5 = v26 - v10;
  v12 = sub_6F90E570((FILE **)(v3 + 36), (unsigned int)&v28 & 0xFFFFFFF0, v26 - v10);
  if ( v5 != v12 || !(v23 & 1) )
    return v12 == v5;
  if ( (*(int (__stdcall **)(int, int, _DWORD, int *, unsigned int, int, int *))(**(_DWORD **)(v3 + 84) + 8))(
         v24,
         v27,
         *(_DWORD *)(v3 + 20),
         &v27,
         (unsigned int)&v28 & 0xFFFFFFF0,
         v25,
         &v26) == 2 )
    goto LABEL_11;
  v14 = v26 - v10;
  return sub_6F90E570((FILE **)(v3 + 36), (unsigned int)&v28 & 0xFFFFFFF0, v26 - v10) == v14;
}
