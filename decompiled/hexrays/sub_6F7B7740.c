int __cdecl sub_6F7B7740(int a1, int a2)
{
  char *v2; // edi@1
  _DWORD *v3; // ecx@4
  int result; // eax@6
  int v5; // ebp@8
  int v6; // eax@9
  int v7; // edx@9
  int v8; // esi@9
  _DWORD *v9; // ST10_4@9
  int *v10; // ST14_4@9
  int *v11; // esi@9
  int v12; // eax@9
  bool v13; // zf@9
  bool v14; // sf@9
  unsigned __int8 v15; // of@9
  _DWORD *v16; // [sp+10h] [bp-FCh]@1
  int v17; // [sp+18h] [bp-F4h]@7
  int v18; // [sp+1Ch] [bp-F0h]@7
  int v19; // [sp+2Ch] [bp-E0h]@1
  char v20; // [sp+30h] [bp-DCh]@1

  v2 = &v20;
  v16 = *(_DWORD **)(a1 + 528);
  (*(void (__cdecl **)(int, char *, signed int, int *))(a2 + 60))(a2, &v20, 16, &v19);
  if ( v19 < 0 )
  {
    result = 162;
    *(_DWORD *)(a2 + 12) = 162;
  }
  else
  {
    if ( v19 && v19 <= 16 )
    {
      v3 = v16;
      if ( v16 && *v16 )
      {
        result = 3;
        if ( *v16 == v19 )
        {
          v18 = *(_DWORD *)a2;
          v17 = *(_DWORD *)(a2 + 8);
          goto LABEL_8;
        }
      }
      else
      {
        result = sub_6F7B7100(a1, v19, 0);
        if ( !result )
        {
          v3 = *(_DWORD **)(a1 + 528);
          v18 = *(_DWORD *)a2;
          v17 = *(_DWORD *)(a2 + 8);
          if ( v19 <= 0 )
          {
LABEL_10:
            *(_DWORD *)a2 = v18;
            *(_DWORD *)(a2 + 8) = v17;
            result = 0;
            *(_DWORD *)(a2 + 12) = 0;
            return result;
          }
LABEL_8:
          v5 = 0;
          do
          {
            v6 = *(_DWORD *)v2;
            v7 = v3[35];
            v8 = 4 * v5;
            v9 = v3;
            ++v5;
            v2 += 12;
            *(_DWORD *)a2 = v6;
            v10 = (int *)(v8 + v7);
            v11 = (int *)(v3[34] + v8);
            *(_DWORD *)(a2 + 8) = *((_DWORD *)v2 - 2);
            v12 = (*(int (__cdecl **)(int, _DWORD))(a2 + 40))(a2, 0);
            v15 = __OFSUB__(v19, v5);
            v13 = v19 == v5;
            v14 = v19 - v5 < 0;
            *v11 = v12;
            v3 = v9;
            *v10 = v12;
          }
          while ( !((unsigned __int8)(v14 ^ v15) | v13) );
          goto LABEL_10;
        }
      }
    }
    else
    {
      result = 3;
    }
    *(_DWORD *)(a2 + 12) = result;
  }
  return result;
}
