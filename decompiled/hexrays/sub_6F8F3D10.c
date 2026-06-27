int __stdcall sub_6F8F3D10(int a1, signed __int16 a2, int a3, __int16 a4, int *a5, int a6, int a7, unsigned int a8, int a9, _DWORD *a10)
{
  unsigned int v10; // ebp@1
  int v11; // ebx@1
  signed int v12; // eax@2
  int v13; // edi@5
  unsigned int v14; // esi@5
  bool v15; // dl@6
  signed __int16 v16; // ax@12
  char v17; // al@13
  unsigned int v18; // eax@16
  __int16 *v19; // eax@20
  __int16 v20; // ax@21
  __int16 *v21; // eax@27
  __int16 v22; // ax@28
  int v23; // ecx@29
  bool v24; // cl@31
  signed __int16 *v26; // eax@40
  bool v27; // ST2F_1@48
  bool v28; // [sp+1Fh] [bp-2Dh]@7
  bool v29; // [sp+1Fh] [bp-2Dh]@8
  int v30; // [sp+20h] [bp-2Ch]@1
  int v31; // [sp+24h] [bp-28h]@1
  signed __int16 v32; // [sp+2Ch] [bp-20h]@1
  bool v33; // [sp+2Eh] [bp-1Eh]@5

  v10 = 10;
  v11 = a1;
  v32 = a2;
  v30 = a3;
  v31 = sub_6F95DC70(a9 + 108);
  if ( a8 != 2 )
  {
    v12 = 1;
    if ( a8 == 4 )
      v12 = 1000;
    v10 = v12;
  }
  v33 = a4 == -1;
  v13 = 0;
  v14 = 0;
  while ( 1 )
  {
    v15 = v32 == -1 && v11 != 0;
    if ( v15 )
    {
      v19 = *(__int16 **)(v11 + 8);
      if ( (unsigned int)v19 >= *(_DWORD *)(v11 + 12) )
      {
        v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 36))(v11);
        v15 = v32 == -1 && v11 != 0;
      }
      else
      {
        v20 = *v19;
      }
      if ( v20 == -1 )
        v11 = 0;
      if ( v20 != -1 )
        v15 = 0;
    }
    else
    {
      v15 = v32 == -1;
    }
    v28 = v33 && v30 != 0;
    if ( v33 && v30 != 0 )
      break;
    v29 = a4 == -1;
    if ( v14 >= a8 )
      goto LABEL_34;
LABEL_9:
    if ( v29 == v15 )
      goto LABEL_34;
    if ( v11 && v32 == -1 )
    {
      v26 = *(signed __int16 **)(v11 + 8);
      if ( (unsigned int)v26 >= *(_DWORD *)(v11 + 12) )
        v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 36))(v11);
      else
        v16 = *v26;
      if ( v16 == -1 )
        v11 = 0;
    }
    else
    {
      v16 = v32;
    }
    v17 = (*(int (__stdcall **)(_DWORD, signed int))(*(_DWORD *)v31 + 48))((unsigned __int16)v16, 42);
    if ( (unsigned __int8)(v17 - 48) > 9u )
      goto LABEL_35;
    v13 = v17 + 10 * v13 - 48;
    if ( (signed int)(v13 * v10) > a7 || (signed int)(v10 + v13 * v10) <= a6 )
      goto LABEL_35;
    v18 = *(_DWORD *)(v11 + 8);
    v10 /= 0xAu;
    if ( v18 >= *(_DWORD *)(v11 + 12) )
      (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 40))(v11);
    else
      *(_DWORD *)(v11 + 8) = v18 + 2;
    ++v14;
    v32 = -1;
  }
  v21 = *(__int16 **)(v30 + 8);
  if ( (unsigned int)v21 >= *(_DWORD *)(v30 + 12) )
  {
    v27 = v15;
    v22 = (*(int (**)(void))(*(_DWORD *)v30 + 36))();
    v15 = v27;
  }
  else
  {
    v22 = *v21;
  }
  v23 = 0;
  if ( v22 != -1 )
    v23 = v30;
  v30 = v23;
  v24 = v28;
  if ( v22 != -1 )
    v24 = 0;
  v29 = v24;
  if ( v14 < a8 )
    goto LABEL_9;
LABEL_34:
  if ( v14 == a8 )
  {
LABEL_38:
    *a5 = v13;
    return v11;
  }
LABEL_35:
  if ( a8 == 4 && v14 == 2 )
  {
    v13 -= 100;
    goto LABEL_38;
  }
  *a10 |= 4u;
  return v11;
}
