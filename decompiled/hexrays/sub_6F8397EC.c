int __cdecl sub_6F8397EC(int a1, _BYTE *a2)
{
  int result; // eax@2
  char v3; // [sp+1Ah] [bp-DEh]@3

  if ( a1 )
  {
    sub_6F83962E(a1, (int)&v3, (int)a2);
    result = sub_6F839262(a1, &v3);
  }
  else
  {
    result = sub_6F839262(0, a2);
  }
  return result;
}
