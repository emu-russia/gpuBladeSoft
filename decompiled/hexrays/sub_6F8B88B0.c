void __cdecl sub_6F8B88B0(unsigned int a1, int a2)
{
  void (*v2)(void); // eax@3

  if ( a1 > 1 )
    sub_6F8B8A40(*(void (**)(void))(a2 - 36));
  _InterlockedSub((volatile signed __int32 *)(a2 - 64), 1u);
  if ( a1 == 1 )
  {
    v2 = *(void (**)(void))(a2 - 44);
    if ( v2 )
      v2();
    sub_6F9621E0(a2 + 32);
  }
}
