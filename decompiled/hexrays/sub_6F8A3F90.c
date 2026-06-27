signed __int64 __cdecl sub_6F8A3F90(FILE *a1)
{
  signed __int64 result; // rax@2
  __int64 v2; // [sp+18h] [bp-14h]@1

  if ( fgetpos(a1, &v2) )
    result = -1i64;
  else
    result = v2;
  return result;
}
