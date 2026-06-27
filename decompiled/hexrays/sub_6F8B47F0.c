signed int __cdecl sub_6F8B47F0(unsigned int a1)
{
  signed int result; // eax@1
  int v2; // eax@6
  int v3; // edi@6
  int v4; // edx@7
  int v5; // ecx@8

  result = 22;
  if ( dword_7037357C > a1 && dword_7037354C )
  {
    sub_6F8B6C00((int *)&unk_6FB48AD8);
    *(_DWORD *)(dword_7037354C + 4 * a1) = 0;
    if ( dword_70373578 > a1 )
      dword_70373578 = a1;
    sub_6F8B2F50((volatile signed __int32 *)&unk_6FB48AD4);
    if ( dword_70373568 )
    {
      v2 = dword_7037356C;
      v3 = dword_7037356C + 8 * dword_70373568;
      do
      {
        v4 = *(_DWORD *)v2;
        if ( *(_DWORD *)v2 )
        {
          v5 = *(_DWORD *)(v4 + 44);
          if ( v5 )
          {
            if ( a1 < *(_DWORD *)(v4 + 40) )
            {
              *(_DWORD *)(v5 + 4 * a1) = 0;
              *(_BYTE *)(*(_DWORD *)(*(_DWORD *)v2 + 48) + a1) = 0;
            }
          }
        }
        v2 += 8;
      }
      while ( v2 != v3 );
    }
    sub_6F8B3270((volatile signed __int32 *)&unk_6FB48AD4);
    sub_6F8B6B50((int *)&unk_6FB48AD8);
    result = 0;
  }
  return result;
}
