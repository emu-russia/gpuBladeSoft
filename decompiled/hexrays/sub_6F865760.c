int __cdecl sub_6F865760(int a1)
{
  int v1; // eax@1
  char *v2; // eax@1
  char *v3; // edx@1
  int v4; // esi@1
  int v5; // eax@1
  int v6; // esi@3
  bool v7; // al@16
  int result; // eax@19
  int v9; // edx@23
  int v10; // eax@35
  char v11; // al@37
  int v12; // [sp+1Ch] [bp-1Ch]@1

  v1 = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 28);
  *(_DWORD *)(a1 + 400) = v1;
  *(_DWORD *)v1 = sub_6F865330;
  *(_DWORD *)(v1 + 4) = sub_6F8654B8;
  *(_BYTE *)(v1 + 8) = 0;
  v12 = *(_DWORD *)(a1 + 400);
  sub_6F8654E4(a1);
  v2 = (char *)(**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 1408);
  v3 = v2;
  v4 = (int)(v2 + 256);
  *(_DWORD *)(a1 + 292) = v2 + 256;
  memset(v2, 0, 0x100u);
  v5 = 0;
  do
  {
    v3[v5 + 256] = v5;
    ++v5;
  }
  while ( v5 != 256 );
  v6 = v4 + 128;
  LOWORD(v5) = 128;
  do
    v3[v5++ + 384] = -1;
  while ( v5 != 512 );
  memset((void *)(v6 + 512), 0, 0x180u);
  qmemcpy((void *)(v6 + 896), *(const void **)(a1 + 292), 0x80u);
  *(_DWORD *)(v12 + 12) = 0;
  *(_BYTE *)(v12 + 16) = sub_6F865298(a1);
  *(_DWORD *)(v12 + 20) = 0;
  *(_DWORD *)(v12 + 24) = 0;
  if ( !*(_BYTE *)(a1 + 74) )
  {
    *(_BYTE *)(a1 + 88) = 0;
    *(_BYTE *)(a1 + 89) = 0;
    *(_BYTE *)(a1 + 90) = 0;
    goto LABEL_27;
  }
  if ( !*(_BYTE *)(a1 + 64) )
  {
    *(_BYTE *)(a1 + 88) = 0;
    *(_BYTE *)(a1 + 89) = 0;
    *(_BYTE *)(a1 + 90) = 0;
  }
  if ( *(_BYTE *)(a1 + 65) )
  {
    v10 = *(_DWORD *)a1;
    *(_DWORD *)(v10 + 20) = 48;
    (*(void (__cdecl **)(int))v10)(a1);
    if ( *(_DWORD *)(a1 + 100) != 3 )
      goto LABEL_10;
  }
  else if ( *(_DWORD *)(a1 + 100) != 3 )
  {
LABEL_10:
    *(_BYTE *)(a1 + 88) = 1;
    *(_BYTE *)(a1 + 89) = 0;
    *(_BYTE *)(a1 + 90) = 0;
    *(_DWORD *)(a1 + 116) = 0;
    goto LABEL_11;
  }
  if ( *(_DWORD *)(a1 + 116) )
  {
    *(_BYTE *)(a1 + 89) = 1;
    v11 = *(_BYTE *)(a1 + 88);
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 80) )
    {
      *(_BYTE *)(a1 + 88) = 1;
LABEL_11:
      sub_6F867508(a1);
      *(_DWORD *)(v12 + 20) = *(_DWORD *)(a1 + 440);
      if ( *(_DWORD *)(a1 + 88) & 0xFFFF00 )
        goto LABEL_12;
LABEL_27:
      if ( *(_BYTE *)(a1 + 65) )
        goto LABEL_13;
      goto LABEL_28;
    }
    *(_BYTE *)(a1 + 90) = 1;
    v11 = *(_BYTE *)(a1 + 88);
  }
  if ( v11 )
    goto LABEL_11;
  if ( !(*(_DWORD *)(a1 + 88) & 0xFFFF00) )
    goto LABEL_27;
LABEL_12:
  sub_6F868B40(a1);
  *(_DWORD *)(v12 + 24) = *(_DWORD *)(a1 + 440);
  if ( *(_BYTE *)(a1 + 65) )
    goto LABEL_13;
LABEL_28:
  if ( *(_BYTE *)(v12 + 16) )
  {
    sub_6F865F5C(a1);
  }
  else
  {
    sub_6F871ED0(a1);
    sub_6F8667F8(a1);
  }
  sub_6F8663F8(a1, *(_BYTE *)(a1 + 90));
LABEL_13:
  sub_6F8726DC(a1);
  if ( *(_BYTE *)(a1 + 202) )
    sub_6F87075C(a1);
  else
    sub_6F87471C(a1);
  if ( *(_BYTE *)(*(_DWORD *)(a1 + 416) + 16) )
    v7 = 1;
  else
    v7 = *(_BYTE *)(a1 + 64) != 0;
  sub_6F8717F0(a1, v7);
  if ( !*(_BYTE *)(a1 + 65) )
    sub_6F874DB0(a1, 0);
  (*(void (__cdecl **)(int))(*(_DWORD *)(a1 + 4) + 24))(a1);
  (*(void (__cdecl **)(int))(*(_DWORD *)(a1 + 416) + 8))(a1);
  result = *(_DWORD *)(a1 + 8);
  if ( result && !*(_BYTE *)(a1 + 64) && *(_BYTE *)(*(_DWORD *)(a1 + 416) + 16) )
  {
    if ( *(_BYTE *)(a1 + 201) )
      v9 = 3 * *(_DWORD *)(a1 + 36) + 2;
    else
      v9 = *(_DWORD *)(a1 + 36);
    *(_DWORD *)(result + 4) = 0;
    *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 288) * v9;
    *(_DWORD *)(result + 12) = 0;
    *(_DWORD *)(result + 16) = 3 - (*(_BYTE *)(a1 + 90) < 1u);
    ++*(_DWORD *)(v12 + 12);
  }
  return result;
}
