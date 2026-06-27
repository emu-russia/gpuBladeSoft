_DWORD *__cdecl sub_6F8FD120(int a1, __int16 a2)
{
  _DWORD *v2; // esi@1
  _DWORD *result; // eax@1
  __int16 *v4; // ecx@2
  int v5; // edx@2

  v2 = sub_6F8FD810(a1, 0);
  result = v2 + 3;
  if ( a1 )
  {
    v4 = (__int16 *)(v2 + 3);
    v5 = a1;
    if ( a1 == 1 )
    {
      *((_WORD *)v2 + 6) = a2;
    }
    else
    {
      do
      {
        *v4 = a2;
        ++v4;
        --v5;
      }
      while ( v5 );
    }
  }
  v2[2] = 0;
  *v2 = a1;
  *((_WORD *)v2 + a1 + 6) = 0;
  return result;
}
