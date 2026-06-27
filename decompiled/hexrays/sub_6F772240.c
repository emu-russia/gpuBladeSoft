signed int __cdecl sub_6F772240(int a1, unsigned int a2, int *a3)
{
  signed int result; // eax@2
  int v4; // edi@4
  unsigned int v5; // eax@4
  unsigned int v6; // edx@4
  unsigned int v7; // ebp@5
  int v8; // edx@6
  unsigned int v9; // ecx@8
  unsigned int v10; // edx@8
  int v11; // edx@10
  int v12; // [sp+1Ch] [bp-20h]@1

  v12 = 0;
  if ( *(_DWORD *)(a1 + 20) )
  {
    result = 85;
    if ( a2 <= *(_DWORD *)(a1 + 4) )
    {
      v4 = *(_DWORD *)(a1 + 28);
      v5 = sub_6F773AE0(*(_DWORD *)(a1 + 28), a2, &v12);
      v6 = v5;
      *(_DWORD *)a1 = v5;
      result = v12;
      if ( !v12 )
      {
        v7 = (*(int (__cdecl **)(int, _DWORD, unsigned int, unsigned int))(a1 + 20))(a1, *(_DWORD *)(a1 + 8), v6, a2);
        if ( a2 > v7 )
        {
          sub_6F773D90(v4, *(_DWORD *)a1);
          *(_DWORD *)a1 = 0;
          *(_DWORD *)(a1 + 32) = 0;
          result = 85;
          *(_DWORD *)(a1 + 36) = a2;
          *(_DWORD *)(a1 + 8) += v7;
        }
        else
        {
          v8 = *(_DWORD *)a1;
          result = v12;
          *(_DWORD *)(a1 + 8) += v7;
          *(_DWORD *)(a1 + 32) = v8;
          *(_DWORD *)(a1 + 36) = v8 + a2;
          if ( !result )
          {
LABEL_7:
            *a3 = v8;
            *(_DWORD *)(a1 + 32) = 0;
            result = 0;
            *(_DWORD *)(a1 + 36) = 0;
            return result;
          }
        }
      }
    }
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 8);
    v10 = *(_DWORD *)(a1 + 4);
    result = 85;
    if ( v9 < v10 && a2 <= v10 - v9 )
    {
      v11 = *(_DWORD *)a1;
      *(_DWORD *)(a1 + 8) = v9 + a2;
      v8 = v9 + v11;
      goto LABEL_7;
    }
  }
  return result;
}
