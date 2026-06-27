signed int __stdcall TlsCallback_0(int a1, int a2, int a3)
{
  signed int result; // eax@5
  void *v4; // ebx@6

  if ( dword_6FB48A40 != 2 )
    dword_6FB48A40 = 2;
  if ( a2 == 2 )
  {
    v4 = &unk_7037702C;
    if ( &unk_7037702C == &unk_7037702C )
      return 1;
    do
    {
      if ( *(_DWORD *)v4 )
        (*(void (**)(void))v4)();
      v4 = (char *)v4 + 4;
    }
    while ( &unk_7037702C != v4 );
    result = 1;
  }
  else
  {
    if ( a2 != 1 )
      return 1;
    sub_6F8A0F00(a1, 1);
    result = 1;
  }
  return result;
}
