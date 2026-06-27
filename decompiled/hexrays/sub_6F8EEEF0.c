int __stdcall sub_6F8EEEF0(int a1, int a2, int a3, int a4, int a5)
{
  int result; // eax@2
  int v6; // edx@2
  int v7; // eax@3
  int v8; // ecx@4
  int v9; // edx@4
  int v10; // eax@4
  bool v11; // zf@5
  int v12; // eax@6
  int v13; // eax@6
  int v14; // ecx@8
  int v15; // eax@9
  unsigned int v16; // eax@9
  void *v17; // esp@9
  size_t v18; // ecx@9
  char v19; // al@9
  int v20; // edi@11
  int v21; // eax@11
  int v22; // eax@14
  int v23; // eax@14
  int v24; // edi@15
  char v25; // [sp+8h] [bp-88h]@3
  char v26; // [sp+2Bh] [bp-65h]@9
  unsigned int v27; // [sp+2Ch] [bp-64h]@9
  int v28; // [sp+30h] [bp-60h]@9
  int v29; // [sp+34h] [bp-5Ch]@9
  int v30; // [sp+38h] [bp-58h]@3
  int v31; // [sp+3Ch] [bp-54h]@1
  int v32; // [sp+40h] [bp-50h]@1
  int v33; // [sp+44h] [bp-4Ch]@3
  int v34; // [sp+60h] [bp-30h]@2
  int v35; // [sp+64h] [bp-2Ch]@2

  v32 = a4;
  v31 = *(_DWORD *)(a3 + 12);
  if ( !(v31 & 1) )
  {
    result = sub_6F8EDAD0(a1, a2, a3, (char)v32, (unsigned __int8)a5);
    v35 = v6;
    v34 = result;
    return result;
  }
  v30 = a5;
  LOBYTE(v33) = a2;
  v7 = sub_6F8BEE80(a3 + 108);
  if ( (_BYTE)a5 )
  {
    v8 = *(_DWORD *)(v7 + 20);
    v9 = *(_DWORD *)(v7 + 24);
    v10 = *(_DWORD *)(a3 + 8);
    v30 = v8;
    if ( v9 >= v10 )
      goto LABEL_5;
LABEL_9:
    v15 = v10 - v9;
    v29 = v9;
    v28 = v15;
    v16 = 16 * ((unsigned int)(v15 + 27) >> 4);
    sub_6F8A13B0(v16, v25);
    v17 = alloca(v16);
    v27 = (unsigned int)&v26 & 0xFFFFFFF0;
    memset((void *)((unsigned int)&v26 & 0xFFFFFFF0), (char)v32, v18);
    v19 = v31;
    *(_DWORD *)(a3 + 8) = 0;
    if ( (v19 & 0xB0) == 32 )
    {
      if ( (_BYTE)v33 )
        return a1;
      v22 = *(_DWORD *)a1;
      v33 = v29;
      v23 = (*(int (__thiscall **)(int, int, int))(v22 + 48))(a1, v30, v29);
      if ( v33 == v23 )
      {
        v24 = v28;
        LOBYTE(v33) = v24 != (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)a1 + 48))(a1, v27, v28);
        return a1;
      }
    }
    else
    {
      v32 = v29;
      if ( (_BYTE)v33 )
        return a1;
      v20 = v28;
      v21 = (*(int (__fastcall **)(int, int, unsigned int, int))(*(_DWORD *)a1 + 48))(a1, v29, v27, v28);
      v9 = v32;
      if ( v20 == v21 )
        goto LABEL_6;
    }
    LOBYTE(v33) = 1;
    return a1;
  }
  v14 = *(_DWORD *)(v7 + 28);
  v9 = *(_DWORD *)(v7 + 32);
  v10 = *(_DWORD *)(a3 + 8);
  v30 = v14;
  if ( v9 < v10 )
    goto LABEL_9;
LABEL_5:
  v11 = (_BYTE)v33 == 0;
  *(_DWORD *)(a3 + 8) = 0;
  if ( v11 )
  {
LABEL_6:
    v12 = *(_DWORD *)a1;
    v33 = v9;
    v13 = (*(int (__thiscall **)(int, int, int))(v12 + 48))(a1, v30, v9);
    LOBYTE(v33) = v33 != v13;
  }
  return a1;
}
