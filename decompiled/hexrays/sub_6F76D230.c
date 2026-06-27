signed int __cdecl sub_6F76D230(int a1, int a2)
{
  signed int result; // eax@1
  _DWORD *v3; // ebx@2
  int v4; // edx@7
  int (__cdecl *v5)(int, const char *); // eax@7
  int (__cdecl **v6)(_DWORD, _DWORD); // eax@8
  unsigned int v7; // edx@12
  char v8; // [sp+18h] [bp-14h]@9
  int v9; // [sp+1Ch] [bp-10h]@10

  result = 35;
  if ( a1 )
  {
    v3 = *(_DWORD **)(a1 + 40);
    if ( v3 && a2 )
    {
      if ( *(_DWORD *)a2
        && (v4 = *(_DWORD *)(*(_DWORD *)a2 + 96), (v5 = *(int (__cdecl **)(int, const char *))(*(_DWORD *)v4 + 32)) != 0)
        && (v6 = (int (__cdecl **)(_DWORD, _DWORD))v5(v4, "tt-cmaps")) != 0
        && !(*v6)(a2, &v8)
        && v9 == 14
        || (v7 = (unsigned int)&v3[*(_DWORD *)(a1 + 36)], (unsigned int)v3 >= v7) )
      {
LABEL_11:
        result = 6;
      }
      else
      {
        while ( a2 != *v3 )
        {
          ++v3;
          if ( v7 <= (unsigned int)v3 )
            goto LABEL_11;
        }
        *(_DWORD *)(a1 + 92) = *v3;
        result = 0;
      }
    }
    else
    {
      result = 38;
    }
  }
  return result;
}
