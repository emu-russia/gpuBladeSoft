int sub_6F96A8E0()
{
  unsigned int v0; // et0@1
  unsigned int v1; // ST18_4@1
  unsigned int v2; // et0@1
  unsigned int v3; // edx@1
  unsigned int v4; // et0@1
  int result; // eax@1

  v0 = __getcallerseflags();
  v1 = v0;
  v2 = __readeflags();
  v3 = v2;
  __writeeflags(v2 ^ 0x200000);
  v4 = __readeflags();
  __writeeflags(v1);
  result = v3 ^ v4;
  if ( (v3 ^ v4) & 0x200000 )
  {
    _EAX = 0;
    __asm { cpuid }
    if ( result )
    {
      _EAX = 1;
      __asm { cpuid }
      if ( _EDX & 0x2000000 )
        result = sub_6F96A890(_EDX);
    }
  }
  return result;
}
