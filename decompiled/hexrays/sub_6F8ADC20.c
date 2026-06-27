int *__cdecl sub_6F8ADC20(int a1)
{
  signed int v1; // ebx@1
  signed int v2; // eax@2
  int *v3; // eax@4

  v1 = 0;
  if ( a1 > 19 )
  {
    v2 = 4;
    do
    {
      v2 *= 2;
      ++v1;
    }
    while ( v2 + 15 < a1 );
  }
  v3 = sub_6F8B0700(v1);
  *v3 = v1;
  return v3 + 1;
}
