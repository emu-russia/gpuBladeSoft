signed int __cdecl sub_6F76FF60(int *a1, unsigned int a2, unsigned int a3, int a4)
{
  signed int result; // eax@1
  int v5; // esi@2
  char *v6; // eax@9
  int v7; // edx@9
  int v8; // eax@10
  int v9; // eax@10
  char *v10; // eax@11
  int v11; // ecx@11
  int v12; // [sp+2Ch] [bp-10h]@9

  result = 33;
  if ( a1 )
  {
    v5 = *a1;
    if ( !a4 )
      return 6;
    if ( !v5 )
      return 6;
    *(_WORD *)a4 = 0;
    *(_WORD *)(a4 + 2) = 0;
    *(_DWORD *)(a4 + 4) = 0;
    *(_DWORD *)(a4 + 8) = 0;
    *(_DWORD *)(a4 + 12) = 0;
    *(_DWORD *)(a4 + 16) = 0;
    if ( a3 >> 31 || a2 < a3 )
      return 6;
    result = 10;
    if ( a2 <= 0x7FFF )
    {
      v6 = sub_6F773B30(v5, 8, 0, a2, 0, &v12);
      v7 = v12;
      *(_DWORD *)(a4 + 4) = v6;
      if ( v7 )
      {
LABEL_10:
        *(_DWORD *)(a4 + 16) |= 1u;
        sub_6F773D90(v5, (int)v6);
        v8 = *(_DWORD *)(a4 + 8);
        *(_DWORD *)(a4 + 4) = 0;
        sub_6F773D90(v5, v8);
        v9 = *(_DWORD *)(a4 + 12);
        *(_DWORD *)(a4 + 8) = 0;
        sub_6F773D90(v5, v9);
        *(_DWORD *)(a4 + 12) = 0;
        *(_WORD *)a4 = 0;
        *(_WORD *)(a4 + 2) = 0;
        *(_DWORD *)(a4 + 4) = 0;
        *(_DWORD *)(a4 + 8) = 0;
        *(_DWORD *)(a4 + 16) = 0;
        return v12;
      }
      v10 = sub_6F773B30(v5, 1, 0, a2, 0, &v12);
      v11 = v12;
      *(_DWORD *)(a4 + 8) = v10;
      if ( v11 || (*(_DWORD *)(a4 + 12) = sub_6F773B30(v5, 2, 0, a3, 0, &v12), (result = v12) != 0) )
      {
        v6 = *(char **)(a4 + 4);
        goto LABEL_10;
      }
      *(_DWORD *)(a4 + 16) |= 1u;
      *(_WORD *)(a4 + 2) = a2;
      *(_WORD *)a4 = a3;
    }
  }
  return result;
}
