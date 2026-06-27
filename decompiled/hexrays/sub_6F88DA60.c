size_t __cdecl sub_6F88DA60(int a1, char *a2, size_t a3)
{
  size_t v3; // ebp@1
  size_t v4; // esi@1
  size_t v6; // edi@9
  char *v7; // ebp@10
  int v8; // eax@11
  int v9; // edx@11
  int v10; // ecx@12
  int v11; // eax@13
  size_t v12; // edi@13
  signed int v13; // edx@29

  v3 = 0;
  v4 = a3;
  if ( !a1 || *(_DWORD *)(a1 + 12) != 31153 )
    return v3;
  v3 = *(_DWORD *)(a1 + 76);
  if ( !v3 )
  {
    if ( (a3 & 0x80000000) != 0 )
    {
      sub_6F88C430(a1, -3, "requested length does not fit in int");
    }
    else if ( a3 && (*(_DWORD *)(a1 + 24) || sub_6F88D720(a1) != -1) )
    {
      if ( !*(_DWORD *)(a1 + 72) || (v13 = *(_DWORD *)(a1 + 68), *(_DWORD *)(a1 + 72) = 0, sub_6F88D9C0(a1, v13) != -1) )
      {
        v6 = *(_DWORD *)(a1 + 24);
        if ( a3 >= v6 )
        {
          if ( !*(_DWORD *)(a1 + 88) || sub_6F88D830(a1, 0) != -1 )
          {
            *(_DWORD *)(a1 + 8) += a3;
            *(_DWORD *)(a1 + 88) = a3;
            *(_DWORD *)(a1 + 84) = a2;
            if ( sub_6F88D830(a1, 0) != -1 )
              v3 = a3;
          }
        }
        else
        {
          v7 = a2;
          while ( 1 )
          {
            v8 = *(_DWORD *)(a1 + 88);
            v9 = *(_DWORD *)(a1 + 32);
            if ( v8 )
            {
              v10 = *(_DWORD *)(a1 + 84);
            }
            else
            {
              *(_DWORD *)(a1 + 84) = v9;
              v10 = v9;
            }
            v11 = v10 + v8 - v9;
            v12 = v6 - v11;
            if ( v12 > v4 )
              v12 = v4;
            memcpy((void *)(v9 + v11), v7, v12);
            *(_DWORD *)(a1 + 88) += v12;
            *(_DWORD *)(a1 + 8) += v12;
            v4 -= v12;
            if ( !v4 )
              return a3;
            if ( sub_6F88D830(a1, 0) == -1 )
              break;
            v7 += v12;
            v6 = *(_DWORD *)(a1 + 24);
          }
          v3 = 0;
        }
      }
    }
    return v3;
  }
  return 0;
}
