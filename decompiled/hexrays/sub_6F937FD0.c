char __cdecl sub_6F937FD0(_DWORD *a1, _BYTE *a2)
{
  signed int v2; // ecx@1
  const char *v3; // edi@1
  bool v4; // cf@1
  bool v5; // zf@1
  _BYTE *v6; // esi@1
  char result; // al@4

  v2 = 2;
  v3 = "C";
  v4 = 0;
  v5 = 0;
  v6 = a2;
  *a1 = 0;
  do
  {
    if ( !v2 )
      break;
    v4 = *v6 < (const unsigned __int8)*v3;
    v5 = *v6++ == *v3++;
    --v2;
  }
  while ( v5 );
  result = (!v4 && !v5) - v4;
  if ( (!v4 && !v5) != v4 )
    sub_6F95B720("locale::facet::_S_create_c_locale name not valid");
  return result;
}
