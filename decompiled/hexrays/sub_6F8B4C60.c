volatile signed __int32 *__cdecl sub_6F8B4C60(int a1)
{
  volatile signed __int32 *result; // eax@1

  result = (volatile signed __int32 *)sub_6F8B3D30();
  if ( result )
  {
    result += 4;
    if ( a1 <= 0 )
      _InterlockedSub(result, 1u);
    else
      _InterlockedAdd(result, 1u);
  }
  return result;
}
