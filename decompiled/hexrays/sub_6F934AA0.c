void *__cdecl sub_6F934AA0(int a1, char a2, void *a3, int a4, int a5, signed int a6)
{
  char *v6; // edi@1
  size_t v7; // ebx@1
  void *result; // eax@1
  signed int v9; // ebp@2
  char *v10; // esi@3
  char v11; // cl@9
  char v12; // al@10
  int v13; // eax@20
  unsigned int v14; // edx@20
  int v15; // ST18_4@24
  unsigned int v16; // ST18_4@28
  unsigned int v17; // ST18_4@32
  char v18; // al@37
  unsigned int v19; // ST1C_4@29
  unsigned int v20; // ST1C_4@25
  unsigned int v21; // ST1C_4@33
  const void *v22; // [sp+10h] [bp-2Ch]@1
  int (__stdcall *v23)(unsigned __int8); // [sp+18h] [bp-24h]@24
  int (__stdcall *v24)(unsigned __int8); // [sp+18h] [bp-24h]@28
  int (__stdcall *v25)(unsigned __int8); // [sp+18h] [bp-24h]@32
  unsigned int v26; // [sp+18h] [bp-24h]@37

  v6 = (char *)a3;
  v22 = (const void *)a4;
  v7 = a5 - a6;
  result = (void *)(*(_DWORD *)(a1 + 12) & 0xB0);
  if ( result == (void *)32 )
  {
    if ( a6 )
    {
      result = memcpy(a3, (const void *)a4, a6);
      if ( a5 == a6 )
        return result;
    }
    else if ( !a5 )
    {
      return result;
    }
    return memset((char *)a3 + a6, a2, v7);
  }
  v9 = a6;
  if ( result != (void *)16 )
    goto LABEL_3;
  v13 = sub_6F95DC10(a1 + 108);
  v14 = v13;
  if ( *(_BYTE *)(v13 + 28) )
  {
    result = (void *)*(_BYTE *)a4;
    if ( *(_BYTE *)(v14 + 74) == (_BYTE)result )
    {
LABEL_23:
      *(_BYTE *)a3 = (_BYTE)result;
      v9 = a6 - 1;
      v6 = (char *)a3 + 1;
      v22 = (const void *)(a4 + 1);
      goto LABEL_3;
    }
    goto LABEL_22;
  }
  v15 = v13;
  sub_6F8C33B0(v13);
  v14 = v15;
  v23 = *(int (__stdcall **)(unsigned __int8))(*(_DWORD *)v15 + 24);
  result = (void *)45;
  if ( v23 != sub_6F8C3660 )
  {
    v20 = v14;
    result = (void *)((int (__thiscall *)(unsigned int, signed int))v23)(v14, 45);
    v14 = v20;
  }
  if ( *(_BYTE *)a4 == (_BYTE)result )
    goto LABEL_23;
  if ( *(_BYTE *)(v14 + 28) )
  {
    result = (void *)*(_BYTE *)a4;
LABEL_22:
    if ( *(_BYTE *)(v14 + 72) == (_BYTE)result )
      goto LABEL_23;
LABEL_7:
    if ( *(_BYTE *)(v14 + 77) == (_BYTE)result && a6 > 1 )
    {
LABEL_9:
      v11 = *(_BYTE *)(a4 + 1);
      if ( v11 == *(_BYTE *)(v14 + 149) )
      {
LABEL_40:
        v6 = (char *)a3 + 2;
        v9 = a6 - 2;
        *(v6 - 2) = *(_BYTE *)a4;
        result = (void *)*(_BYTE *)(a4 + 1);
        v22 = (const void *)(a4 + 2);
        *(v6 - 1) = (char)result;
        goto LABEL_3;
      }
      goto LABEL_10;
    }
LABEL_3:
    v10 = &v6[v7];
    if ( a5 == a6 )
    {
      if ( !v9 )
        return result;
      return memcpy(v10, v22, v9);
    }
    goto LABEL_13;
  }
  v16 = v14;
  sub_6F8C33B0(v14);
  v14 = v16;
  v24 = *(int (__stdcall **)(unsigned __int8))(*(_DWORD *)v16 + 24);
  result = (void *)43;
  if ( v24 != sub_6F8C3660 )
  {
    v19 = v14;
    result = (void *)((int (__thiscall *)(unsigned int, signed int))v24)(v14, 43);
    v14 = v19;
  }
  if ( *(_BYTE *)a4 == (_BYTE)result )
    goto LABEL_23;
  if ( *(_BYTE *)(v14 + 28) )
  {
    result = (void *)*(_BYTE *)a4;
    goto LABEL_7;
  }
  v17 = v14;
  sub_6F8C33B0(v14);
  v14 = v17;
  v25 = *(int (__stdcall **)(unsigned __int8))(*(_DWORD *)v17 + 24);
  result = (void *)48;
  if ( v25 != sub_6F8C3660 )
  {
    v21 = v14;
    result = (void *)((int (__thiscall *)(unsigned int, signed int))v25)(v14, 48);
    v14 = v21;
  }
  if ( *(_BYTE *)a4 != (_BYTE)result || a6 <= 1 )
    goto LABEL_3;
  if ( *(_BYTE *)(v14 + 28) )
    goto LABEL_9;
  v26 = v14;
  v18 = sub_6F8C35E0((void *)v14, 120);
  v11 = *(_BYTE *)(a4 + 1);
  if ( v11 == v18 )
    goto LABEL_40;
  v14 = v26;
  if ( *(_BYTE *)(v26 + 28) )
  {
LABEL_10:
    v12 = *(_BYTE *)(v14 + 117);
    goto LABEL_11;
  }
  v12 = sub_6F8C35E0((void *)v26, 88);
  v11 = *(_BYTE *)(a4 + 1);
LABEL_11:
  if ( v12 == v11 )
    goto LABEL_40;
  v10 = (char *)a3 + v7;
  if ( a5 == a6 )
    return memcpy(v10, v22, v9);
LABEL_13:
  result = memset(v6, a2, v7);
  if ( v9 )
    return memcpy(v10, v22, v9);
  return result;
}
