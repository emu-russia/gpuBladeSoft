signed int __cdecl sub_6F7917B0(int a1)
{
  signed int result; // eax@1
  int v2; // ebx@1
  int v3; // eax@3
  int v4; // eax@4

  result = 3;
  v2 = *(_DWORD *)(a1 + 20);
  if ( v2 )
  {
    if ( *(_BYTE *)(a1 + 68) )
    {
      v3 = *(_DWORD *)(a1 + 12);
      if ( (unsigned int)(*(_WORD *)(v3 + 20) + *(_WORD *)(v3 + 56) + 1) <= *(_DWORD *)(v3 + 8)
        || (result = sub_6F7CA4F0(v3, 0, 1)) == 0 )
      {
        v4 = *(_WORD *)v2;
        if ( (signed __int16)v4 > 0 )
        {
          *(_WORD *)(*(_DWORD *)(v2 + 12) + 2 * v4 - 2) = *(_WORD *)(v2 + 2) - 1;
          LOWORD(v4) = *(_WORD *)v2;
        }
        *(_WORD *)v2 = v4 + 1;
        result = 0;
      }
    }
    else
    {
      ++*(_WORD *)v2;
      result = 0;
    }
  }
  return result;
}
