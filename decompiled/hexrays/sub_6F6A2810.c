int __cdecl sub_6F6A2810(int a1, int a2)
{
  int result; // eax@3

LABEL_3:
  for ( result = (unsigned __int8)byte_70041D30; byte_70041D30; result = (unsigned __int8)byte_70041D30 )
  {
    if ( *(_BYTE *)(dword_70041D44 + a2) )
    {
      sub_6F6A1B20(a1, a2);
      *(_BYTE *)(dword_70041D44 + a2) = 0;
      if ( !*(_BYTE *)(dword_70041D40 + a2) )
        goto LABEL_3;
    }
    else if ( !*(_BYTE *)(dword_70041D40 + a2) )
    {
      goto LABEL_3;
    }
    sub_6F6A0F80(a1, a2);
    *(_BYTE *)(dword_70041D40 + a2) = 0;
  }
  return result;
}
