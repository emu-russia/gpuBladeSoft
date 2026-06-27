int __cdecl sub_6F83987F(int a1, _BYTE *a2, signed int a3)
{
  int result; // eax@3

  if ( *(_DWORD *)(a1 + 116) & 0x8000 )
  {
    if ( a3 > 1 )
      result = sub_6F839842(a1, a2);
    else
      result = sub_6F8397EC(a1, a2);
  }
  else
  {
    result = *(_DWORD *)(a1 + 116) & 0x8000;
    if ( !result )
    {
      if ( a3 > 0 )
        result = sub_6F8395F1(a1, a2);
      else
        result = sub_6F8395B4(a1, a2);
    }
  }
  return result;
}
