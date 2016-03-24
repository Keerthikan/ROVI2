# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from camera1394/GetCameraRegistersRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class GetCameraRegistersRequest(genpy.Message):
  _md5sum = "3899ed32cc2bf9b6257abe5965b09162"
  _type = "camera1394/GetCameraRegistersRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """
uint8 TYPE_CONTROL=0
uint8 TYPE_ABSOLUTE=1
uint8 TYPE_FORMAT7=2
uint8 TYPE_ADVANCED_CONTROL=3
uint8 TYPE_PIO=4
uint8 TYPE_SIO=5
uint8 TYPE_STROBE=6

uint8 type

uint64 offset

uint32 num_regs

uint32 mode

"""
  # Pseudo-constants
  TYPE_CONTROL = 0
  TYPE_ABSOLUTE = 1
  TYPE_FORMAT7 = 2
  TYPE_ADVANCED_CONTROL = 3
  TYPE_PIO = 4
  TYPE_SIO = 5
  TYPE_STROBE = 6

  __slots__ = ['type','offset','num_regs','mode']
  _slot_types = ['uint8','uint64','uint32','uint32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       type,offset,num_regs,mode

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GetCameraRegistersRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.type is None:
        self.type = 0
      if self.offset is None:
        self.offset = 0
      if self.num_regs is None:
        self.num_regs = 0
      if self.mode is None:
        self.mode = 0
    else:
      self.type = 0
      self.offset = 0
      self.num_regs = 0
      self.mode = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_BQ2I.pack(_x.type, _x.offset, _x.num_regs, _x.mode))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 17
      (_x.type, _x.offset, _x.num_regs, _x.mode,) = _struct_BQ2I.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_BQ2I.pack(_x.type, _x.offset, _x.num_regs, _x.mode))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 17
      (_x.type, _x.offset, _x.num_regs, _x.mode,) = _struct_BQ2I.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_BQ2I = struct.Struct("<BQ2I")
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from camera1394/GetCameraRegistersResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class GetCameraRegistersResponse(genpy.Message):
  _md5sum = "4680a08e992f8f11add4bc58e31c78a7"
  _type = "camera1394/GetCameraRegistersResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """
uint32[] value


"""
  __slots__ = ['value']
  _slot_types = ['uint32[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       value

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GetCameraRegistersResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.value is None:
        self.value = []
    else:
      self.value = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      length = len(self.value)
      buff.write(_struct_I.pack(length))
      pattern = '<%sI'%length
      buff.write(struct.pack(pattern, *self.value))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sI'%length
      start = end
      end += struct.calcsize(pattern)
      self.value = struct.unpack(pattern, str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      length = len(self.value)
      buff.write(_struct_I.pack(length))
      pattern = '<%sI'%length
      buff.write(self.value.tostring())
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sI'%length
      start = end
      end += struct.calcsize(pattern)
      self.value = numpy.frombuffer(str[start:end], dtype=numpy.uint32, count=length)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
class GetCameraRegisters(object):
  _type          = 'camera1394/GetCameraRegisters'
  _md5sum = '9597d397bc64c4c4fcaf24bbb15f0256'
  _request_class  = GetCameraRegistersRequest
  _response_class = GetCameraRegistersResponse
