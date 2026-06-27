int __cdecl sub_6F839519(int a1, _BYTE *a2)
{
  int result; // eax@4

  if ( !(*(_DWORD *)(a1 + 120) & 0x100000) )
  {
    if ( *(_DWORD *)(a1 + 116) & 0x8000 && *(_DWORD *)(a1 + 284) )
      sub_6F83979A(a1, (int)a2);
    sub_6F839044(a1, (int)a2);
  }
  if ( *(_DWORD *)(a1 + 116) & 0x8000 && *(_DWORD *)(a1 + 284) )
    result = sub_6F8397EC(a1, a2);
  else
    result = sub_6F839262(a1, a2);
  return result;
}
