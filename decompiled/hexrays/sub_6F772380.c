signed int __cdecl sub_6F772380(int a1, unsigned int a2)
{
  signed int result; // eax@2
  int v3; // edi@4
  unsigned int v4; // eax@4
  unsigned int v5; // edx@4
  unsigned int v6; // ebp@5
  int v7; // edx@6
  unsigned int v8; // edx@8
  unsigned int v9; // ecx@8
  int v10; // eax@10
  int v11; // [sp+1Ch] [bp-20h]@1

  v11 = 0;
  if ( *(_DWORD *)(a1 + 20) )
  {
    result = 85;
    if ( *(_DWORD *)(a1 + 4) >= a2 )
    {
      v3 = *(_DWORD *)(a1 + 28);
      v4 = sub_6F773AE0(*(_DWORD *)(a1 + 28), a2, &v11);
      v5 = v4;
      *(_DWORD *)a1 = v4;
      result = v11;
      if ( !v11 )
      {
        v6 = (*(int (__cdecl **)(int, _DWORD, unsigned int, unsigned int))(a1 + 20))(a1, *(_DWORD *)(a1 + 8), v5, a2);
        if ( a2 > v6 )
        {
          sub_6F773D90(v3, *(_DWORD *)a1);
          *(_DWORD *)a1 = 0;
          result = 85;
          v7 = 0;
        }
        else
        {
          v7 = *(_DWORD *)a1;
          result = v11;
        }
        *(_DWORD *)(a1 + 32) = v7;
        *(_DWORD *)(a1 + 8) += v6;
        *(_DWORD *)(a1 + 36) = v7 + a2;
      }
    }
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 8);
    v9 = *(_DWORD *)(a1 + 4);
    result = 85;
    if ( v8 < v9 && a2 <= v9 - v8 )
    {
      v10 = v8 + *(_DWORD *)a1;
      *(_DWORD *)(a1 + 32) = v10;
      *(_DWORD *)(a1 + 36) = a2 + v10;
      *(_DWORD *)(a1 + 8) = v8 + a2;
      result = 0;
    }
  }
  return result;
}
