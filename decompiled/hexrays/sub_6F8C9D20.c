int __stdcall sub_6F8C9D20(_WORD *a1, unsigned int a2)
{
  _WORD *v2; // edx@1
  int result; // eax@1
  int v4; // ecx@2
  int v5; // eax@2

  v2 = a1;
  for ( result = 0; a2 > (unsigned int)v2; result = v4 + v5 )
  {
    v4 = *v2;
    v5 = __ROL4__(result, 7);
    ++v2;
  }
  return result;
}
