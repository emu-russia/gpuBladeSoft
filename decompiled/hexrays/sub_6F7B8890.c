int __cdecl sub_6F7B8890(int a1, int a2)
{
  int result; // eax@4
  char *v3; // edi@6
  int v4; // esi@6
  size_t v5; // ebx@7
  void *v6; // eax@8
  void *v7; // ebp@8
  _BYTE *v8; // eax@9
  _BYTE *v9; // eax@10
  int v10; // [sp+18h] [bp-64h]@5
  int v11; // [sp+1Ch] [bp-60h]@5
  int v12; // [sp+28h] [bp-54h]@1
  int v13; // [sp+2Ch] [bp-50h]@1
  char v14; // [sp+30h] [bp-4Ch]@1

  v13 = 0;
  (*(void (__cdecl **)(int, char *, signed int, int *))(a2 + 60))(a2, &v14, 4, &v12);
  if ( v12 < 0 )
  {
    result = 162;
    goto LABEL_13;
  }
  if ( !v12 || v12 > 4 )
    goto LABEL_12;
  result = sub_6F7B7100(a1, 0, v12);
  v13 = result;
  if ( !result )
  {
    v10 = *(_DWORD *)(a1 + 528);
    v11 = *(_DWORD *)(a1 + 100);
    if ( v12 > 0 )
    {
      v3 = &v14;
      v4 = 0;
      while ( 1 )
      {
        v9 = *(_BYTE **)v3;
        if ( **(_BYTE **)v3 == 47 )
          *(_DWORD *)v3 = ++v9;
        v5 = *((_DWORD *)v3 + 1) - (_DWORD)v9;
        if ( *((_BYTE **)v3 + 1) == v9 )
          break;
        v6 = sub_6F773A50(v11, v5 + 1, &v13);
        v7 = v6;
        *(_DWORD *)(v10 + 4 * v4 + 8) = v6;
        result = v13;
        if ( v13 )
          goto LABEL_13;
        v8 = *(_BYTE **)v3;
        ++v4;
        v3 += 12;
        memcpy(v7, v8, v5);
        *((_BYTE *)v7 + v5) = 0;
        if ( v12 <= v4 )
        {
          result = v13;
          goto LABEL_13;
        }
      }
LABEL_12:
      result = 3;
      goto LABEL_13;
    }
  }
LABEL_13:
  *(_DWORD *)(a2 + 12) = result;
  return result;
}
