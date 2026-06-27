__int32 __cdecl sub_6F765E70(int a1, const char *a2, __int32 a3)
{
  __int32 result; // eax@3
  const char *v4; // eax@4

  if ( a1 && a2 && (v4 = (const char *)sub_6F764A70(a1, a2, -1), v4 != (const char *)-1) )
    result = strtol(v4, 0, 0);
  else
    result = a3;
  return result;
}
