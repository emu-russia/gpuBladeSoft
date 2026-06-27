signed int __cdecl sub_6F892DD0(int a1, signed int a2)
{
  signed int v2; // ebx@1
  int v3; // esi@2
  int v4; // ebp@4
  signed int result; // eax@10

  v2 = a2;
  if ( !a1 )
    goto LABEL_16;
  v3 = *(_DWORD *)(a1 + 28);
  if ( !v3 )
    goto LABEL_16;
  if ( a2 < 0 )
  {
    v2 = -a2;
    v4 = 0;
  }
  else
  {
    v4 = (a2 >> 4) + 1;
    if ( a2 <= 47 )
      v2 = a2 & 0xF;
  }
  if ( (unsigned int)(v2 - 8) <= 7 || !v2 )
  {
    if ( *(_DWORD *)(v3 + 52) )
    {
      if ( v2 != *(_DWORD *)(v3 + 36) )
      {
        (*(void (__cdecl **)(_DWORD, _DWORD))(a1 + 36))(*(_DWORD *)(a1 + 40), *(_DWORD *)(v3 + 52));
        *(_DWORD *)(v3 + 52) = 0;
      }
    }
    *(_DWORD *)(v3 + 8) = v4;
    *(_DWORD *)(v3 + 36) = v2;
    result = sub_6F892D90(a1);
  }
  else
  {
LABEL_16:
    result = -2;
  }
  return result;
}
