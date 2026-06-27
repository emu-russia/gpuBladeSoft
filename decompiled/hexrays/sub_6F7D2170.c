signed int __usercall sub_6F7D2170@<eax>(char *a1@<eax>)
{
  const char *v1; // edx@1
  char *v2; // ebp@1
  signed int v3; // eax@1
  int v4; // edi@1
  int v5; // esi@1
  signed int result; // eax@2
  char *v7; // ebx@2
  char v8; // cl@5

  v1 = "GL_EXT_texture_type_2_10_10_10_REV";
  v2 = a1;
  v3 = 920;
  v4 = 920;
  v5 = 0;
LABEL_2:
  result = v3 >> 1;
  v7 = v2;
  while ( 1 )
  {
    v8 = *v7;
    if ( !*v7 && !*v1 )
      return result;
    if ( *v1 < v8 )
      break;
    if ( *v1 > v8 )
    {
      v4 = result - 1;
      if ( v5 > result - 1 )
        return -1;
LABEL_9:
      v3 = v5 + v4;
      v1 = off_6FB87A60[(v5 + v4) >> 1];
      goto LABEL_2;
    }
    ++v7;
    ++v1;
  }
  v5 = result + 1;
  if ( result + 1 <= v4 )
    goto LABEL_9;
  return -1;
}
