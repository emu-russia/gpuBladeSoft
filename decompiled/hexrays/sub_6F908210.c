int __cdecl sub_6F908210(_BYTE *a1, _BYTE *a2)
{
  size_t v2; // ebx@1
  _DWORD *v3; // eax@1
  size_t *v4; // esi@1
  int v5; // ebp@1
  int result; // eax@4

  v2 = a2 - a1;
  v3 = sub_6F908830(a2 - a1, 0);
  v4 = v3;
  v5 = (int)(v3 + 3);
  if ( a2 - a1 == 1 )
  {
    *((_BYTE *)v3 + 12) = *a1;
  }
  else if ( a2 != a1 )
  {
    memcpy(v3 + 3, a1, v2);
  }
  v4[2] = 0;
  result = v5;
  *v4 = v2;
  *((_BYTE *)v4 + v2 + 12) = 0;
  return result;
}
