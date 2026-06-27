int __cdecl sub_6F835096(int a1, int a2)
{
  int result; // eax@2

  if ( a2 )
  {
    qmemcpy((void *)(a2 + 40), (const void *)(a1 + 732), 0x4Cu);
    result = sub_6F834FA7(a1, a2);
  }
  return result;
}
