# coding: utf-8

"""
    Arm API

    REST API to manage your virtual devices.  # noqa: E501

    The version of the OpenAPI document: 1
    Generated by: https://openapi-generator.tech
"""


try:
    from inspect import getfullargspec
except ImportError:
    from inspect import getargspec as getfullargspec
import pprint
import re  # noqa: F401
import six

from AvhClientAsync.configuration import Configuration


class Image(object):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """

    """
    Attributes:
      openapi_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    openapi_types = {
        'status': 'str',
        'id': 'str',
        'name': 'str',
        'type': 'str',
        'size': 'float',
        'project': 'str',
        'created_at': 'datetime',
        'updated_at': 'datetime'
    }

    attribute_map = {
        'status': 'status',
        'id': 'id',
        'name': 'name',
        'type': 'type',
        'size': 'size',
        'project': 'project',
        'created_at': 'created_at',
        'updated_at': 'updated_at'
    }

    def __init__(self, status=None, id=None, name=None, type=None, size=None, project=None, created_at=None, updated_at=None, local_vars_configuration=None):  # noqa: E501
        """Image - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration.get_default_copy()
        self.local_vars_configuration = local_vars_configuration

        self._status = None
        self._id = None
        self._name = None
        self._type = None
        self._size = None
        self._project = None
        self._created_at = None
        self._updated_at = None
        self.discriminator = None

        self.status = status
        self.id = id
        self.name = name
        self.type = type
        self.size = size
        self.project = project
        self.created_at = created_at
        self.updated_at = updated_at

    @property
    def status(self):
        """Gets the status of this Image.  # noqa: E501


        :return: The status of this Image.  # noqa: E501
        :rtype: str
        """
        return self._status

    @status.setter
    def status(self, status):
        """Sets the status of this Image.


        :param status: The status of this Image.  # noqa: E501
        :type status: str
        """
        if self.local_vars_configuration.client_side_validation and status is None:  # noqa: E501
            raise ValueError("Invalid value for `status`, must not be `None`")  # noqa: E501

        self._status = status

    @property
    def id(self):
        """Gets the id of this Image.  # noqa: E501

        Image ID  # noqa: E501

        :return: The id of this Image.  # noqa: E501
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this Image.

        Image ID  # noqa: E501

        :param id: The id of this Image.  # noqa: E501
        :type id: str
        """

        self._id = id

    @property
    def name(self):
        """Gets the name of this Image.  # noqa: E501


        :return: The name of this Image.  # noqa: E501
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this Image.


        :param name: The name of this Image.  # noqa: E501
        :type name: str
        """

        self._name = name

    @property
    def type(self):
        """Gets the type of this Image.  # noqa: E501

        Type of image  # noqa: E501

        :return: The type of this Image.  # noqa: E501
        :rtype: str
        """
        return self._type

    @type.setter
    def type(self, type):
        """Sets the type of this Image.

        Type of image  # noqa: E501

        :param type: The type of this Image.  # noqa: E501
        :type type: str
        """
        allowed_values = [None,"fwbinary", "kernel", "devicetree", "ramdisk", "loaderfile", "sepfw", "seprom", "bootrom", "llb", "iboot", "ibootdata", "fwpackage", "partition/  * @property {string} self"]  # noqa: E501
        if self.local_vars_configuration.client_side_validation and type not in allowed_values:  # noqa: E501
            raise ValueError(
                "Invalid value for `type` ({0}), must be one of {1}"  # noqa: E501
                .format(type, allowed_values)
            )

        self._type = type

    @property
    def size(self):
        """Gets the size of this Image.  # noqa: E501

        //  * @property {number} checksum/  * @property {string} encoding  # noqa: E501

        :return: The size of this Image.  # noqa: E501
        :rtype: float
        """
        return self._size

    @size.setter
    def size(self, size):
        """Sets the size of this Image.

        //  * @property {number} checksum/  * @property {string} encoding  # noqa: E501

        :param size: The size of this Image.  # noqa: E501
        :type size: float
        """

        self._size = size

    @property
    def project(self):
        """Gets the project of this Image.  # noqa: E501

        project ID  # noqa: E501

        :return: The project of this Image.  # noqa: E501
        :rtype: str
        """
        return self._project

    @project.setter
    def project(self, project):
        """Sets the project of this Image.

        project ID  # noqa: E501

        :param project: The project of this Image.  # noqa: E501
        :type project: str
        """

        self._project = project

    @property
    def created_at(self):
        """Gets the created_at of this Image.  # noqa: E501

        When Image was created  # noqa: E501

        :return: The created_at of this Image.  # noqa: E501
        :rtype: datetime
        """
        return self._created_at

    @created_at.setter
    def created_at(self, created_at):
        """Sets the created_at of this Image.

        When Image was created  # noqa: E501

        :param created_at: The created_at of this Image.  # noqa: E501
        :type created_at: datetime
        """

        self._created_at = created_at

    @property
    def updated_at(self):
        """Gets the updated_at of this Image.  # noqa: E501

        When Image was last updated  # noqa: E501

        :return: The updated_at of this Image.  # noqa: E501
        :rtype: datetime
        """
        return self._updated_at

    @updated_at.setter
    def updated_at(self, updated_at):
        """Sets the updated_at of this Image.

        When Image was last updated  # noqa: E501

        :param updated_at: The updated_at of this Image.  # noqa: E501
        :type updated_at: datetime
        """

        self._updated_at = updated_at

    def to_dict(self, serialize=False):
        """Returns the model properties as a dict"""
        result = {}

        def convert(x):
            if hasattr(x, "to_dict"):
                args = getfullargspec(x.to_dict).args
                if len(args) == 1:
                    return x.to_dict()
                else:
                    return x.to_dict(serialize)
            else:
                return x

        for attr, _ in six.iteritems(self.openapi_types):
            value = getattr(self, attr)
            attr = self.attribute_map.get(attr, attr) if serialize else attr
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: convert(x),
                    value
                ))
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], convert(item[1])),
                    value.items()
                ))
            else:
                result[attr] = convert(value)

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, Image):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, Image):
            return True

        return self.to_dict() != other.to_dict()
