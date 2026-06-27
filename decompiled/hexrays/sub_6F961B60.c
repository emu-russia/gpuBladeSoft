void *__cdecl sub_6F961B60(size_t a1)
{
  signed int v1; // ebx@1
  void *result; // eax@3
  void (*v3)(void); // eax@4
  _DWORD *v4; // eax@6

  v1 = a1;
  if ( !a1 )
    v1 = 1;
  while ( 1 )
  {
    result = malloc(v1);
    if ( result )
      break;
    v3 = (void (*)(void))sub_6F959F00();
    if ( !v3 )
    {
      v4 = (_DWORD *)sub_6F961D10(4);
      *v4 = off_6FBB0FAC;
      sub_6F9628A0((int)v4, (int)&off_6FBACC40, (int)sub_6F957EE0);
    }
    v3();
  }
  return result;
}
