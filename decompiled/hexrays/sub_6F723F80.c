void sub_6F723F80()
{
  signed int v0; // ecx@1
  signed int v1; // ebx@1
  char v2; // al@1
  int v3; // edx@3
  int v4; // edx@5
  int v5; // ecx@13
  int v6; // [sp+1Ch] [bp-20h]@5

  v0 = (unsigned __int8)byte_6FBB5051;
  v1 = (unsigned __int8)byte_6FBB5055;
  v2 = byte_6FBB5050;
  if ( (unsigned __int8)byte_6FBB5051 <= (unsigned __int8)byte_6FBB5050 )
    v2 = byte_6FBB5051;
  v3 = (unsigned __int8)v2;
  if ( (unsigned __int8)v2 > (signed int)(unsigned __int8)byte_6FBB5052 )
    v3 = (unsigned __int8)byte_6FBB5052;
  v6 = v3;
  v4 = (unsigned __int8)byte_6FBB5054;
  if ( (unsigned __int8)v1 <= (unsigned __int8)byte_6FBB5054 )
    v4 = (unsigned __int8)byte_6FBB5055;
  if ( v4 > (unsigned __int8)byte_6FBB5056 )
    v4 = (unsigned __int8)byte_6FBB5056;
  if ( (unsigned __int8)v0 < (unsigned __int8)byte_6FBB5050 )
    v0 = (unsigned __int8)byte_6FBB5050;
  if ( v0 < (unsigned __int8)byte_6FBB5052 )
    v0 = (unsigned __int8)byte_6FBB5052;
  v5 = v0 - v6 + 1;
  if ( (unsigned __int8)v1 < (unsigned __int8)byte_6FBB5054 )
    v1 = (unsigned __int8)byte_6FBB5054;
  if ( v1 < (unsigned __int8)byte_6FBB5056 )
    v1 = (unsigned __int8)byte_6FBB5056;
  sub_6F6964B0(v6, v4, v5, v1 - v4 + 1);
}
