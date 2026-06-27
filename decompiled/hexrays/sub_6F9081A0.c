_DWORD *__cdecl sub_6F9081A0(size_t a1, char a2)
{
  _DWORD *v2; // esi@1
  _DWORD *result; // eax@4

  v2 = sub_6F908830(a1, 0);
  if ( a1 )
  {
    if ( a1 == 1 )
      *((_BYTE *)v2 + 12) = a2;
    else
      memset(v2 + 3, a2, a1);
  }
  v2[2] = 0;
  result = v2 + 3;
  *v2 = a1;
  *((_BYTE *)v2 + a1 + 12) = 0;
  return result;
}
