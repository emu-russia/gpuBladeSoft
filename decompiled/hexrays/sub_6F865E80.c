_DWORD *__cdecl sub_6F865E80(int a1, int a2, _DWORD *a3, int a4, int a5, int *a6, int a7)
{
  int v7; // ebx@1
  unsigned int v8; // esi@2
  int v9; // edx@4
  int v10; // ST08_4@7
  _DWORD *result; // eax@7
  unsigned int v12; // [sp+2Ch] [bp-2Ch]@4
  int v13; // [sp+38h] [bp-20h]@5
  int v14; // [sp+3Ch] [bp-1Ch]@6

  v7 = *(_DWORD *)(a1 + 432);
  if ( !*(_BYTE *)(v7 + 36) )
  {
    v8 = *(_DWORD *)(v7 + 44);
    if ( v8 > 1 )
      v8 = 2;
    v9 = *a6;
    v12 = a7 - *a6;
    if ( v8 > v12 )
    {
      v13 = *(_DWORD *)(a5 + 4 * v9);
      v8 = v12;
    }
    else
    {
      v13 = *(_DWORD *)(a5 + 4 * v9);
      if ( v8 == 2 )
      {
        v14 = *(_DWORD *)(a5 + 4 * v9 + 4);
LABEL_7:
        v10 = *a3;
        result = (_DWORD *)(*(int (__thiscall **)(int))(v7 + 12))(a5);
        goto LABEL_8;
      }
    }
    v14 = *(_DWORD *)(v7 + 32);
    *(_BYTE *)(v7 + 36) = 1;
    goto LABEL_7;
  }
  result = (_DWORD *)sub_6F868CF4(v7 + 32, 0, a5 + 4 * *a6, 0, 1, *(_DWORD *)(v7 + 40));
  *(_BYTE *)(v7 + 36) = 0;
  v8 = 1;
LABEL_8:
  *a6 += v8;
  *(_DWORD *)(v7 + 44) -= v8;
  if ( !*(_BYTE *)(v7 + 36) )
  {
    result = a3;
    ++*result;
  }
  return result;
}
