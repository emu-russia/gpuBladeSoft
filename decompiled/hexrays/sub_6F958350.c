__int64 __thiscall sub_6F958350(int this, int a2)
{
  __int64 result; // rax@1

  LODWORD(result) = *(_DWORD *)(this + 120);
  *(_DWORD *)(this + 120) = a2;
  HIDWORD(result) = a2 == 0;
  *(_DWORD *)(this + 20) = HIDWORD(result);
  if ( HIDWORD(result) & *(_DWORD *)(this + 16) )
    sub_6F95ACA0("basic_ios::clear");
  return result;
}
